class Solution {
public:
    bool backspaceCompare(string s, string t) {
        int size=s.size();
        for(int i=0;i<size;i++)
        {
            if(s[i]=='#')
            {
                if(i>0)
                {
                    s.erase(i-1,2);
                    size--;
                    i--;
                }
                else
                    s.erase(0,1);
                i--;
                size--;
            } 
        }
        size=t.size();
        for(int i=0;i<size;i++)
        {
            if(t[i]=='#')
            {
                if(i>0)
                {
                    t.erase(i-1,2);
                    size--;
                    i--;
                }
                else
                    t.erase(0,1);
                i--;
                size--;
            }
        }
        return s==t;
    }
};