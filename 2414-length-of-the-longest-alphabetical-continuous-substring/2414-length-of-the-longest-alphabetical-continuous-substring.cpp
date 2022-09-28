class Solution {
public:
    int longestContinuousSubstring(string s) {
        int count = 1;
        int mx = 1;
        for(int i = 0; i < s.length()-1; i++){
           int a = s[i];
           int b = s[i+1];
           if(a+1 == b)
               count++;
           else
               count = 1;
           
            mx = max(count,mx);
        }
            return mx;
    }
};