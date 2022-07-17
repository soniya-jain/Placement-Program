class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int sum;
        vector<int>temp;
        for(int i=0; i<accounts.size(); i++){
           sum=0;
           for(int j=0; j<accounts[i].size(); j++){
               sum+=accounts[i][j];
               temp.push_back(sum);
           } 
        }
        int max=INT_MIN;
        for(int i=0; i<temp.size(); i++){
            if(temp[i]>max)
                max=temp[i];
        }
        
        return max;
    }
};