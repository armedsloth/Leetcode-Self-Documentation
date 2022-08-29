class Solution {
public:
    string findmini(string s, int posi)
    {
        int open=0 , size=s.size();
        for(int i=posi; i<size;i++)
        {
            if(s[i]=='[')
                open++;
            if(s[i]==']')
                open--;
            if(!open)
                return s.substr(posi+1,i-posi);
        }
        return "" ;
    }
    
    string decodeString(string s) {
        string ans;
        int num=0;
        for(int i=0; i<s.size();i++)
        {
            if(isdigit(s[i]))
            {
                num= num*10 + (s[i]-'0');
                if(!isdigit(s[i+1]))
                {
                    for(int j=0; j< num-1 ;j++ )
                        ans+=decodeString(findmini(s,i+1));
                    num=0;
                }
            }
            else
                if(isalpha(s[i]))
                    ans+=s[i];
        }
        return ans;
    }
};