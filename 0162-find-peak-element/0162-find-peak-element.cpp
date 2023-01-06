class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        //nums[-1]=INT_MIN;
        int n = nums.size();
        //nums[n]=INT_MIN;
        int low = 0;
        int high = n-1;
        int mid = low + (high-low)/2;
        while(low<high)
        {
            if(nums[mid]<nums[mid+1])
            {
                low=mid+1;
            }
            else
            {
                high = mid;
            }
           mid = low + (high-low)/2; 
        }
        return low;
    }
};