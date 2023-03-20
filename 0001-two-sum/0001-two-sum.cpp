class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // int n = nums.size();
        // vector<int> ans;
        // for(int i=0;i<n;i++)
        // {
        //     for(int j=i-1;j<n;j++)
        //     {
        //         if(target == nums[i]+nums[j])
        //         {
        //             ans.push_back(i);
        //             ans.push_back(j);
        //             break;
        //         }
        //     }
        // }
        // return ans;
        
        // vector<int> ans;
        // for(int i =0;i<nums.size();i++)
        // {
        //     int sec = target-nums[i];
        //     for(int j=0;j<nums.size();j++)
        //     {
        //     if(sec==nums[j])
        //     {
        //        ans.push_back(i);
        //        ans.push_back(j); 
        //     }
        //     }
        // }
        // return ans;
        
        map<int,int> mpp;
        int n = nums.size();
        for(int i =0;i<n;i++)
        {
            int num = nums[i];
            int left = target-num;
            if(mpp.find(left)!=mpp.end())
            {
                return {mpp[left],i};
            }
            mpp[num]=i;
        }
        return {-1,-1};
    }
};