class Solution { 
    public:     
    string longestPrefix(string s) {         
        int n=s.size();         
        vector<int>lps(n,0);         
        int i=1,len=0;         
        while(i<n){             
            if(s[i]==s[len])lps[i++]=++len;             
            else{                 
                if(len)len=lps[len-1];                            
                else 
                    lps[i++]=0; 
            } 
        }         return s.substr(0,len); 
    } 
}; 
 
