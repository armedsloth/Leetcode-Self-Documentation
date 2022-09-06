class Solution {
public:
    int longestPalindrome(string s) {
        int reg[256]={0}, len=0;
        for(int i=0;i<s.size();i++)
        {
            reg[s[i]]++;
        }
        for(int i=0;i<256;i++)
        {
            if(reg[i]>0)
                len+=floor(reg[i]/2)*2;
        }
        if(len==s.size())
        return len;
        else
            return len+1;
    }
};