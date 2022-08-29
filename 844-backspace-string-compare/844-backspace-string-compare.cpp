class Solution {
public:
    bool backspaceCompare(string s, string t) {
        string temp;
        int size=s.size();
        for(int i=0;i<size;i++)
        {
            if(s[i]=='#')
            {
                if(i>0)
                {
                    temp="";
                    if(size-i>1)
                        temp=s.substr(i+1,size---i-1);
                    s=s.substr(0,i-1)+temp; 
                    i--;
                    size--;
                }
                else
                    s=s.substr(1,size---1);
                i--;
            } 
        }
        size=t.size();
        for(int i=0;i<size;i++)
        {
            if(t[i]=='#')
            {
                if(i>0)
                {
                    temp="";
                    if(size-i>1)
                    temp=t.substr(i+1,size---i-1);
                    t=t.substr(0,i-1)+temp; 
                    i--;
                    size--;

                }
                else
                    t=t.substr(1,size---1);
                i--;
            }
            
        }
        return s==t;
    }
};