class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int cur=0;
        map <char,int> ph;
        vector<int> res;
        for(int i=0;i<p.length();i++)  //initialising ph
        {
            if(ph.find(p[i])==ph.end())
                ph.insert({p[i],1});
            else
                (ph.find(p[i])->second)++;
        }
        map <char,int> sh(ph.begin(),ph.end());
        for(int i=0;i<s.length();i++)
        {
            if(sh.find(s[i])==sh.end()) //element not in anagram
            {
                cur=i+1;
                sh=ph;
            }
            else
            {
                if(sh[s[i]]>0)          //element is needed
                    sh[s[i]]--;
                else                    // element not needed
                {
                    for(int j=cur;j<i;j++)
                    {
                        if(s[j]==s[i])
                        {
                            cur=j+1;
                            break;
                        }
                        sh[s[j]]++;
                    }
                }   
            }
            if(i-cur==p.length()-1)
            { 
                res.push_back(cur);
                sh[s[cur]]++;
                cur++;
            }
        }
        return res;
    }
};