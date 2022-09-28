class Solution {
public:
    int findGCD(vector<int>& nums) {
        int min = nums[0];
        int max = nums[0];
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] < min) min = nums[i];
            if(nums[i] > max) max = nums[i];
        }
        for(int i = max; i >= 1; i--){
            if(max % i == 0 && min % i == 0)
                return i;
        }
        return 1;
    }
};