class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        map <int,int> m;
        for(int i=0;i<nums.size();i++)
            if(m.find(target-nums[i])!=m.end())
                return {m.find(target-nums[i])->second, i};
            else
                m[nums[i]]=i;         
        return {};
    }
};