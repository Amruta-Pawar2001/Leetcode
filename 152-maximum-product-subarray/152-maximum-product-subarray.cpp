
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        //int prod = 1;
        int maxp = INT_MIN, prod = 1;
	    for(int i=0;i<n;i++){
	        prod *= nums[i];
	        maxp = max(maxp, prod);
	        if(prod == 0){
	            prod = 1;
	        }
	    }
	    
	    prod = 1;
	    for(int i=n-1;i>=0;i--){
	        prod *= nums[i];
	        maxp = max(maxp, prod);
	        if(prod == 0){
	            prod = 1;
	        }
	    }
	    
	    return maxp;
        // auto start = nums.begin()+1;
        // int sp = maxProduct(&(start));
        // if(n==1)
        //     return nums[0];
        // if(nums[0]==0&&sp>0)
        // {
        //     return sp;
        // }
        // if(nums[0]<0&&sp<0||nums[0]>0&&sp>0)
        // {
        //     return nums[0]*sp;
        // }
        // if(nums[0]>0&&sp<0)
        // {
        //     return nums[0];
        // }
        
    }
    
};