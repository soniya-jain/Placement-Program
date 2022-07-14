class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       /* Brute Force Approach 
       vector<int>ans;
       int n=nums.size();
       int x,y;
       for(int i=0; i<n; i++){
           y=target-nums[i];
           for(int j=i+1; j<n; j++){
               if(y==nums[j]){
                   ans.push_back(i);
                   ans.push_back(j);
               }
           }
       }
        return ans; */
        
        
        /* 2nd Approach 
        vector<int>ans;
        vector<int> store;
        int n=nums.size();
        store=nums;
        sort(store.begin(),store.end());
        int left=0;
        int right=nums.size()-1;
        int n1, n2;
        while(left<right){
            if(store[left]+store[right]==target){
                n1=store[left];
                n2=store[right];
            }
            else if(store[left]+store[right]>target){
                right--;
            }
            else
                left++;
        }
    }
    for(int i=0; i<n; i++){
        if(nums[i]==n1)
            ans.emplace_back(i);
        if(nums[i]==n2){
            ans.emplace_back(i);
        }
    }
    return ans; */
        // EFFICIENT APPROACH--> Hashing 
        vector<int>ans;
        unordered_map<int,int>mp;
        for(int i=0; i<nums.size(); i++){
            if(mp.find(target-nums[i])!=mp.end()){
                ans.push_back(mp[target-nums[i]]);
                ans.push_back(i);
                return ans;
            }
            mp[nums[i]]=i;
        }
        return ans;
    }
        
};
