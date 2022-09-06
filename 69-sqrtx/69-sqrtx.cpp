class Solution {
public:
    int mySqrt(int x) {
        long r = x; // r = 8
        while(r*r > x){  // 9 > 8 yes true enter loop 
            r = (r + x/r)/2; // r = (5.67)/2 = 2.33 ----> 2
        }
        return r; // output will be 2 
    }
};