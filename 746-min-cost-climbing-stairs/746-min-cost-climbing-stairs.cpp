class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int min1= cost[1], min2=cost[0];
        for(int i=2;i<cost.size();i++)
        {
            int cur= cost[i]+min(min1,min2);
            min2=min1;
            min1=cur;
        }
        return min(min1,min2);
    }
};