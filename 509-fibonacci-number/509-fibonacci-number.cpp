class Solution {
public:
    int fib(int n)
    {
        if(!n)
            return 0;
        if(n == 1)
            return 1;
        int cur1 = 0, cur2 = 1;
        for(int i=2;i <=n; i++)
        {
            cur2+=cur1;
            cur1=cur2-cur1;
        }
        return cur2;
    }   
};