class Solution {
public:
    
    void funhelp(vector<int> output,vector<int> nums, int index, vector<vector<int>> &ans)
    {
        if(index>=nums.size())
        {
            ans.push_back(output);
            return;
        }
        
        funhelp(output , nums , index+1 , ans);
        
        
        output.push_back(nums[index]);
        funhelp(output , nums , index+1 , ans);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        int index = 0;
        vector<int> output;
        vector<vector<int>> ans;
        funhelp(output , nums , index , ans);
        return ans;
    }
};