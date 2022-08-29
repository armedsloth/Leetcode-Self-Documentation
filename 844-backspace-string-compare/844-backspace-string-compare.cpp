class Solution {
public:
    bool backspaceCompare(string s, string t) {
        string temp;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='#')
            {
                if(i>0)
                {
                    temp="";
                    if(s.size()-i>1)
                    temp=s.substr(i+1,s.size()-i-1);
                    s=s.substr(0,i-1)+temp; 
                    i--;
                }
                else
                    s=s.substr(1,s.size()-1);
                i--;
            }
            
        }
        for(int i=0;i<t.size();i++)
        {
            if(t[i]=='#')
            {
                if(i>0)
                {
                    temp="";
                    if(t.size()-i>1)
                    temp=t.substr(i+1,t.size()-i-1);
                    t=t.substr(0,i-1)+temp; 
                    i--;
                }
                else
                    t=t.substr(1,t.size()-1);
                i--;
            }
            
        }
        return s==t;
    }
};