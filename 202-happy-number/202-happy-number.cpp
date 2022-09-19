class Solution {
public:
    bool isHappy(int n) {
        set <int> rec;
        int sum;
        while(1)
        {
            if(rec.find(n)!=rec.end())
                return false;
            rec.insert(n);
            sum=0;
            while(n>0)
            {
                sum+=(n%10) * (n%10);
                n/=10;
            }
            if(sum==1)  return true;
            n=sum;                    
        }
        return false;
    }
};