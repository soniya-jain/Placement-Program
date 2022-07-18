class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int i;
        int ans=0,count=0;
        int k=0;
        for(i=0; i<sentences.size(); i++){
            k=sentences[i].length();
            count=1;
            for(int j=0; j<k; j++){
                if(sentences[i][j]==' ')
                    count++;
            }
            ans=max(ans,count);
        }
        return ans;
    }
};