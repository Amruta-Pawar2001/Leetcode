//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/*You are required to complete this function*/

class Solution{
    public:
    int maxLen(vector<int>&A, int n)
    {   
        // Your code here
        int len = 0;
        int sum = 0;
        map<int,int> freq;
        for(int i=0;i<n;i++)
        {
            sum+=A[i];
            if(sum==0)
            len=i+1;
            else
            {
            if(freq.find(sum)!=freq.end())
            {
                len = max(len , i-freq[sum]);
            }
            else
            {
                freq[sum]=i;
            }
            }
        }
        return len;
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m;
        cin>>m;
        vector<int> array1(m);
        for (int i = 0; i < m; ++i){
            cin>>array1[i];
        }
        Solution ob;
        cout<<ob.maxLen(array1,m)<<endl;
    }
    return 0; 
}



// } Driver Code Ends