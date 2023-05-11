class Solution {
public:
    int maxProfit(vector<int>& arr) {
        int maxprofit = 0 ;
        int minprice = INT_MAX;
        for(int i=0;i<arr.size();i++)
        {
            minprice = min(minprice,arr[i]);
            maxprofit = max(maxprofit , arr[i]-minprice);
        }
        return maxprofit;
    }
};