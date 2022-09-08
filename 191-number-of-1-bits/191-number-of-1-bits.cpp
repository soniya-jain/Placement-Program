class Solution {
public:
    int hammingWeight(uint32_t n) {
        // convert n into a string 
        int count = 0;
        while(n){
             n &= n-1;
             count++;
        }
        return count;
    }
};