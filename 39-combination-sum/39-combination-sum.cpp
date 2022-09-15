class Solution {
public:
    void func(int ind, int target, vector<int>&arr, int n, vector<int>&v, vector<vector<int>>&ans){
        if(ind == n){
            if(target == 0){
                ans.push_back(v);
            }
            return;
        }
        if(arr[ind] <= target){
            v.push_back(arr[ind]);
            func(ind, target-arr[ind], arr,n, v, ans);
            v.pop_back();
        }
        func(ind+1, target, arr,n,v, ans);
    }
    vector<vector<int>> combinationSum(vector<int>& arr, int target) {
        vector<vector<int>> ans;
        vector<int>v;
        int n = arr.size();
        func(0,target,arr,n,v,ans);
        return ans;
    }
};