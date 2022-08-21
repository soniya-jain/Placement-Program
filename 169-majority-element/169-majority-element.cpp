class Solution {
public:
    int majorityElement(vector<int>& nums) {
        /*int n=nums.size();
        unordered_map<int,int>mp;
        for(int i=0; i<n; i++){
            mp[nums[i]]++;
        }
        for(auto it: mp){
            if(it.second>n/2) return it.first;
        }
        return -1;*/
        // Moore's Algorithm
        int count = 0;
        int ans = 0;
        for(auto x: nums){
           if(count == 0) ans = x;
           if(ans == x)
               count++;
           else{
               count--;
           }
        }
        return ans;
     }
};