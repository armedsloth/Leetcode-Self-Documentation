class Solution {
public:
    string getHint(string secret, string guess) {
        int c=0;
        unordered_map <char,int> m;
        vector<int> bullidx;
        for(int i=0; i<secret.size();i++)
        {
            if(secret[i]==guess[i])
                bullidx.push_back(i);
            else
            {
                auto it= m.find(secret[i]);
                if (it==m.end())
                    m.insert({secret[i],1}); 
                else
                    m[secret[i]]++;
            }
        }
        for(int i=0; i<guess.size();i++)
        {
            if(!count(bullidx.begin(),bullidx.end(),i))
            {
                auto it= m.find(guess[i]);
                if (it!=m.end() && it->second-->0)
                    c++;
            }
        } 
        return to_string(bullidx.size())+ "A" + to_string(c) + "B";;
    }
};

