class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        map<int,int>mp;
        for(auto s:stones)
            mp[s]++;
        int count=0;
        for(int i=0;i<jewels.size();i++)
            count+=mp[jewels[i]];
        return count;
    }
};