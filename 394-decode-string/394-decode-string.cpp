class Solution {
public:
    string findmini(string s, int posi)
    {
        int size=s.size(), open=0;
        for(int i=posi;i<size;i++)
        {
            if(s[i]=='[')
                open++;
            if(s[i]==']')
                open--;
            if(!open)
               return s.substr(posi+1,i-posi-1); 
        }
        return "";
    }    
    
    
    string decodeString(string s) {
        int size=s.size(), num=0;
        string ans;
        for(int i=0;i<size;i++)
        {
          if(isdigit(s[i]))
          {
            num= num*10 + s[i]-'0';
            if(s[i+1]=='[')
            {   
                for(int j=0;j<num-1;j++)
                    ans+=decodeString(findmini(s,i+1));
                num=0;
            }
          }
          else
          {
              if(isalpha(s[i]))
              {
                  ans+=s[i];
              }
          }
        }
        return ans;
    }
};