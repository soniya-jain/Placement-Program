class Solution {
public:
    int missingNumber(vector<int>& nums) {
        // Brute Force Approach that came into my mind --> Runtime error 
        /*int n=sizeof(nums);
        sort(nums.begin(),nums.end());
        for(int i=n-1; i>=0; i--){
            if(nums[i]==n){
                n=n-1;
            }
            else{
                return n;
            }
        }
        return -1;*/
        
        // Easy approach 
        int n=nums.size();
        return ((n*(n+1))/2) - (accumulate(nums.begin(),nums.end(),0));
        
    }
};