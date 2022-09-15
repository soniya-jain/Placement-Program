class Solution {
public:
    void func(int ind,int k, int n, vector<int>&v, vector<vector<int>>&ans){
        if(v.size() == k){
            ans.push_back(v);
            return;
        }
        for(int i = ind; i <= n; i++){
            v.push_back(i);
            func(i+1,k,n,v,ans);
            v.pop_back();
        }
    }
    vector<vector<int>> combine(int n, int k) {
        vector<int>v;
        vector<vector<int>>ans;
        func(1,k,n,v,ans);
        return ans;
    }
};