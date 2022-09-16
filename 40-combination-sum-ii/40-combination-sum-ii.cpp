class Solution {
public:
    void func(int ind,vector<int>&arr,int n, int target, vector<int>&v, vector<vector<int>>&ans){
            if(target == 0){
                ans.push_back(v);
                return;
            }
        for(int i = ind; i < n; i++){
          if(i > ind && arr[i] == arr[i-1]) continue;
          if(arr[i] > target) break;
            v.push_back(arr[i]);
            func(i+1,arr,n,target-arr[i],v,ans);
            v.pop_back();
        
      }
    }
    vector<vector<int>> combinationSum2(vector<int>& arr, int target){
        int n = arr.size();
        vector<int>v;
        vector<vector<int>>ans;
        sort(arr.begin(), arr.end());
        func(0,arr,n,target,v,ans);
        return ans;
    }
};