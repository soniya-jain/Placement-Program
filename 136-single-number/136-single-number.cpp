class Solution {
public:
    int singleNumber(vector<int>& nums) {
        // Hashmap Approach
      /* unordered_map<int,int>mp;
        int ans;
        for(int i=0; i<nums.size(); i++) mp[nums[i]]++;
        for(auto it: mp){
            if(it.second==1){
                ans=it.first;
                return ans;
            }
        }
        return -1;*/
        
        // 2nd Efficient Approach --> Using XOR operator 
        int ans = 0;
        for(auto x: nums){
            ans ^= x;
        }
        return ans;
    }
};