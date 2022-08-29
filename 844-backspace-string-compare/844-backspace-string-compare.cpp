class Solution {
public:
    bool backspaceCompare(string s, string t) {
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='#')
            {
                if(i>0)
                {
                    s.erase(i-1,2);
                    i--;
                }
                else
                    s.erase(0,1);
                i--;
            } 
        }
        for(int i=0;i<t.size();i++)
        {
            if(t[i]=='#')
            {
                if(i>0)
                {
                    t.erase(i-1,2);
                    i--;
                }
                else
                    t.erase(0,1);
                i--;
            }
        }
        return s==t;
    }
};