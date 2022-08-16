class Solution {
public:
    int minSetSize(vector<int>& arr) {
         unordered_map<int,int>mp;
         for(int i = 0; i < arr.size(); i++){
             mp[arr[i]]++;
         }
         multiset<int, greater<int>>s;
         for(auto n : mp){
             s.insert(n.second);
         }
        int size = arr.size();
        int count = 0;
        int ans = 0;
        for(auto it = s.begin(); count*2 < arr.size(); it++){
            ans++;
            count+=*it;
        }
        return ans;
    }
};