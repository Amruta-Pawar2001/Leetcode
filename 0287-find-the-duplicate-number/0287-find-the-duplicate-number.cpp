class Solution {
public:
   int findDuplicate(vector < int > & nums) {
  // int slow = nums[0];
  // int fast = nums[0];
  // do {
  //   slow = nums[slow];
  //   fast = nums[nums[fast]];
  // } while (slow != fast);
  // fast = nums[0];
  // while (slow != fast) {
  //   slow = nums[slow];
  //   fast = nums[fast];
  // }
  // return slow;
       
       
       // int ans ;
       // unordered_map<int,int> freq;
       // for(auto x: nums)
       // {
       //     freq[x]++;
       // }
       // int n = nums.size();
       // for(int i=0;i<n;i++)
       // {
       //     if(freq[nums[i]]>1)
       //     {
       //         ans = nums[i];
       //         break;
       //     }
       // }
       // return ans;
       
       
       int slow = nums[0];
       int fast = nums[0];
       do{
           slow = nums[slow];
           fast = nums[nums[fast]];
       }while(slow!=fast);
       fast = nums[0];
       while(slow!=fast)
       {
           slow = nums[slow];
           fast = nums[fast];
       }
       return slow;
}
};