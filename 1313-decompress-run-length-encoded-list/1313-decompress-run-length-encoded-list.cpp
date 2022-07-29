class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        vector<int>ans;
        int freq=0, val=0;
        int j=1;
        for(int i=0; i<nums.size(); i=i+2){
            freq=nums[i];
            val=nums[j];
            j+=2;
            for(int i=0; i<freq; i++){
                ans.push_back(val);
            }
        }
        return ans;
    }
};