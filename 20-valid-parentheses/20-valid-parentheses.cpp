class Solution {
public:
    bool isValid(string s){
       unordered_map<char,char>mp;
       mp['('] = ')';
       mp['['] = ']';
       mp['{'] = '}';
       string temp;
       temp.push_back(s[0]);
       for(int i = 1; i < s.size(); i++){
           if(mp[temp.back()] == s[i]){
               temp.pop_back();
           }
           else{
               temp.push_back(s[i]);
           }
       }
        int n = temp.size();
        return n ? 0 : 1;
    }
};