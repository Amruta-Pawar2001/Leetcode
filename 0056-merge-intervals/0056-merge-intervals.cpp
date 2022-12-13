class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> merged;
        if(intervals.size()==0)
            return merged;
        sort(intervals.begin(),intervals.end());
        vector<int> tempinterval = intervals[0];
        for(auto i:intervals)
        {
            if(tempinterval[1]>=i[0])
                tempinterval[1]=max(tempinterval[1],i[1]);
            else
            {
                merged.push_back(tempinterval);
                tempinterval = i;
            }
        }
        merged.push_back(tempinterval);
        return merged;        
    }
};