class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        //Method 1 Time Complexity:O(NlogN)
        /*sort(nums.begin(),nums.end());
        vector<int>ans;
        int n=sizeof(nums);
        int start=0;
        int end=n-1;
        while(start<=end){
            int mid=(start+end)/2;
            if(nums[mid]==target) ans.push_back(mid);
            else if(nums[mid]<target) start=mid+1;
            else end=mid-1;
        }
        return ans; */
        
        //Method 2 Time Complexity: O(1)
        vector<int>ans;
        int small=0,count=0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]<target) small++;
            if(nums[i]==target) count++;
        }
        int k=0;
        for(int i=small; i<small+count; i++){
            ans.push_back(i);
        }
        return ans;
    }
};