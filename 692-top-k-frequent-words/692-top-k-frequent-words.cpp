class Solution {
public:
    
    struct comp
    {
        bool operator()(const pair<string,int> & l, const pair <string, int> & r) const
        {
            if (l.second != r.second)
                return l.second > r.second;
            return l.first < r.first;
        }
    };
    
    vector<string> topKFrequent(vector<string>& words, int k) {
        map <string, int> um;
        vector<string> ans;
        for(int i=0;i<words.size();i++)
        {
            auto it =um.find(words[i]);
            if(it==um.end())
                um.insert({words[i],1});
            else
                it->second++;   
        }
        set<pair<string,int>, comp> pq (um.begin(),um.end());
        auto it = pq.begin();
        for(int i=0; i<k;i++)
        {
            ans.push_back(it->first);
            it++;
        }
        return ans;
    }
};