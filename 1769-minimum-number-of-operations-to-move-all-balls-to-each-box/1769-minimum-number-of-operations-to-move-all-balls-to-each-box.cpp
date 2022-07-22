class Solution {
public:
    vector<int> minOperations(string boxes) {
        vector<int>ans;
        int count;
        for(int i=0; i<boxes.size(); i++){
            count=0;
            for(int j=0; j<boxes.size(); j++){  
                if(i!=j && boxes[j]=='1')
                    count+=abs(i-j);
            }
            ans.push_back(count);
        }
        return ans;
    }
};