class Solution {
public:
    bool isSubsequence(string s, string t) {
        int ess=0, tee=0;
        while(ess<s.size()&& tee<t.size())
        {
            if(s[ess]==t[tee])
              ess++;
            tee++;
        }
         return (ess==s.size());
    }
};