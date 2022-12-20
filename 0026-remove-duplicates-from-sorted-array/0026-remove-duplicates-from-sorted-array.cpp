class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        int initial = nums[0];
        int in = 0;
        for(int i =0;i<n;i++)
        {
        if(i+1!=n)
        {
            if(nums[i]==nums[i+1])
                continue;
            else
            {
                nums[in+1]=nums[i+1];
                in++;
                initial = nums[i+1];
            }
        }
        }
        int k = in+1;
        return k;        
    }
};