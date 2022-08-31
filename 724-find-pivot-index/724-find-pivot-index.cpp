class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        partial_sum(nums.begin(),nums.end(),nums.begin());  // store in place the partial sums till each element
        for(int i=0; i<nums.size();i++)                     // going left to right to find first pivot
        {
            //leftsum is store in nums[i-1] for non zero i
            int leftsum= i==0 ? 0: nums[i-1] ;
            
            //rightsum is calculated as (sum till last element) - (sum till i)
            int rightsum = i==(nums.size()-1)? 0: (nums[nums.size()-1]-nums[i]);
            
            if(leftsum==rightsum)      
                return i;                                   // returning index
        }
        return -1;                                          // never found
    }
};