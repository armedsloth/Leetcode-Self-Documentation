class Solution {
public:
    bool backspaceCompare(string s, string t) {
        int j,k=0,p=0;
        for(j=0;j <s.size();j++)
            if(s[j]!='#')
                s[k++]=s[j];
            else
                k=max(0,k-1);
        for(j=0;j<t.size();j++)
            if(t[j]!='#')
                t[p++]=t[j];
            else
                p=max(0,p-1);

        s=s.substr(0,k);
        t=t.substr(0,p);
        return s==t;
    }
};