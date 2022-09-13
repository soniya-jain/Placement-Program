class Solution {
public:
    bool hasGroupsSizeX(vector<int>& deck) {
        unordered_map<int,int>mp;
        int res = 0;
        for(int i: deck)
            mp[i]++;
        for(auto it: mp){
            res = __gcd(it.second,res);
        }
        return res >= 2;
      }
};