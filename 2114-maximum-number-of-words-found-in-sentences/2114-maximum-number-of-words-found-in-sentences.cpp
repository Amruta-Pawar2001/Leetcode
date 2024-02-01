class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int n = sentences.size();
        int count=0;
        int highcount=0;
        for(int i =0;i<n;i++)
        {
            const string&str = sentences[i];
            count=0;
            
            for(int j=0;j<str.length();j++)
            {
                if(str[j] == ' ')
                {
                    count++;
                }
            }
            count++;  
            highcount = max(highcount,count);
        }
        return highcount;        
    }
};