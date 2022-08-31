class Solution {
public:
    vector<int> runningSum(vector<int>& nums) 
    {
        for(int i=1;i<nums.size();i++)          // for inplace, from second element to last
        {
            nums[i]+=nums[i-1];                 // inplace running sum by adding previous running sum to element
        }
        return nums;
    }
};