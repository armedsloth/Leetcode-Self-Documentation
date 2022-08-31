class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sum=0, yet=0;
        for( int it : nums) sum+=it;      //finding total sum of the array
        
        for(int i=0 ; i<nums.size(); i++)        // left to right traversing
        {  
            if(sum - 2*yet == nums[i])   // for pivot, total = left + right + pivot = 2*left + pivot
                return i;
            yet+=nums[i];                 // if not pivot, then update sum found yet.
        }
        return -1;                        // never found
    }
};