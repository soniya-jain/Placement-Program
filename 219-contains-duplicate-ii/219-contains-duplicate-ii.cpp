class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        /* Brute Force Approach 
        for(int i = 0; i < nums.size(); i++){
            for(int j = 0; j < nums.size(); j++){
                if(abs(i-j) < k && nums[i] == nums[j])
                    return true;
            }
        }
        return false;  */
        unordered_map<int,int>mp;
        for(int i = 0; i < nums.size(); i++){
            if(mp.find(nums[i])!=mp.end() && i-mp[nums[i]] <= k){
                return true;
            }
            mp[nums[i]] = i;
        }
        return false;
    }
};