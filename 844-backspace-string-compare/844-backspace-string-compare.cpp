class Solution {
public:
    bool backspaceCompare(string s, string t) {
        int j,k=0,p=0;              // j as fast pointer, k and p as true size
        for(j=0;j <s.size();j++)    
            if(s[j]!='#')           
                s[k++]=s[j];        // storing legal character at k position and incrementing k
            else
                k=max(0,k-1);       // removing top character if it is there
        for(j=0;j<t.size();j++)
            if(t[j]!='#')           
                t[p++]=t[j];
            else
                p=max(0,p-1);

        s=s.substr(0,k);            // resizing string to the useful size of characters left.
        t=t.substr(0,p);
        return s==t;
    }
};