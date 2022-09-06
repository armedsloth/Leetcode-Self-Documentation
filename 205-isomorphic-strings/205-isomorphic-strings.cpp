class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int forS[256]={0}, forT[256]={0};
        for(int i=0;i<s.size();i++)
        {
            if(forS[s[i]]!=forT[t[i]])
                return false;
            forS[s[i]]=i+1;
            forT[t[i]]=i+1;
        }
            
        return true;
    }
};