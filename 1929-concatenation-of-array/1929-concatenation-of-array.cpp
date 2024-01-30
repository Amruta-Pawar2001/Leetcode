class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n = nums.size();
        int l = 2*n;
        int j=0;
        vector<int> ans(l);
        for(int i =0;i<l;i++)
        {
            if(j==n)
            j=0;
            ans[i]=nums[j];
            j++;
        }
        return ans;
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        // int n = nums.size();
        // int l = 2*n;
        // vector<int> ans(l);
        // int j =0;
        // for(int i =0;i<l;i++)
        // {
        //     if(j==n)
        //     j=0;
        //     ans[i] = nums[j];
        //     j++;
        // }
        // return ans;
    }
};