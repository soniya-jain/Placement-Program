class Solution {
public:
   /* void swap(int a, int b){
        int temp = a;
        a = b;
        b = temp;
    }*/
    void func(int ind,vector<int>&arr,vector<vector<int>>&ans){
        if(ind == arr.size()){
            ans.push_back(arr);
            return;
        }
        for(int i = ind; i < arr.size(); i++){
            swap(arr[ind], arr[i]);
            func(ind+1,arr,ans);
            swap(arr[ind],arr[i]);
        }
    }
    vector<vector<int>> permute(vector<int>& arr){
        vector<vector<int>>ans;
        vector<int>v;
        func(0,arr,ans);
        return ans;
    }
};