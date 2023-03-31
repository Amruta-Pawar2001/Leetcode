class Solution {
public:
    void sortColors(vector<int>& nums) {
        
        //Dutch National flag algorithm - In this algorithm all the elements to the left of low will be o and to the right of high will be 2;
        // int low = 0;
        // int mid = 0;
        // int high = nums.size()-1;
        // while(mid<=high)
        // {
        // switch(nums[mid]){
        //     case 0: swap(nums[low] , nums[mid]);
        //     low++;
        //     mid++;
        //     break;
        //     case 1: mid++;
        //     break;
        //     case 2: swap(nums[mid],nums[high]);
        //     high--;
        //     break;
        //     }
        // }
          
        int low =0;
        int mid=0;
        int high = nums.size()-1;
        while(mid<=high)
        {
            if(nums[mid]==0)
            {
                swap(nums[mid],nums[low]);
                mid++;low++;
            }
            else
            if(nums[mid]==1)
                mid++;
            else
            if(nums[mid]==2)
            {
                swap(nums[mid],nums[high]);
                high--;
            }
        }
    }
};