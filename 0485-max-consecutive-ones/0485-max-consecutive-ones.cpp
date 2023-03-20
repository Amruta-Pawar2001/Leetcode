class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        // int n = nums.size();
        // int count=0;
        // int maxcount=INT_MIN;
        // for(int i =0;i<n;i++)
        // {
        //     if(nums[i]==1)
        //         count++;
        //     else
        //         count=0;
        //     maxcount=max(count,maxcount);
        // }
        // return maxcount;
        
        int maxi =INT_MIN;
        int count=0;
        int n = nums.size();
        for(int i=0;i<n;i++)
        {            
            if(nums[i]==1)
            {
                count++;
            }
            if(nums[i]==0)
            {
                count=0;
            }
            maxi = max(maxi,count);
        }
        return maxi;
    }
};