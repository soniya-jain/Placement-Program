class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        vector<int>ans;
        priority_queue<int,vector<int>,greater<int>>maxh;// using min heap
        for(int i = 0; i < nums.size(); i++){
            mp[nums[i]]++;
        }
        for(auto &it: mp){
            maxh.push(it.second);
            while(maxh.size()>k) maxh.pop();
        }
        for(auto &it: mp){
            if(it.second >= maxh.top())
                ans.push_back(it.first);
        }
        return ans;
    }
};