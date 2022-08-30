class Solution {
public:
    string findmini(string s, int posi)             // function to find the string to be repeated num times
    {
        int open=0;
        for(int i=posi;i<s.size();i++)                  // loop catching when the brackets balance
        {
            if(s[i]=='[')
                open++;
            if(s[i]==']')
                open--;
            if(!open)
               return s.substr(posi+1,i-posi-1);    // returning the interior of outermost brackets
        }
        return "";
    }    
    
    
    string decodeString(string s) {
        int size=s.size(), num=0;
        string ans;
        for(int i=0;i<size;i++)                             // for every character
        {
          if(isdigit(s[i]))                                 // number encountered
          {
            num= num*10 + s[i]-'0';                         // getting the complete number in num 
            if(s[i+1]=='[')
            {   
                for(int j=0;j<num-1;j++)                    // getting the inner string into the ans num-1 times
                    ans+=decodeString(findmini(s,i+1));     // finding the inner string, and decoding that before adding
                num=0;                                      // reseting num for future use
            }
          }
          else
          {
              if(isalpha(s[i]))                             // alphabets going into ans directly
              {
                  ans+=s[i];
              }
          }
        }
        return ans;
    }
};