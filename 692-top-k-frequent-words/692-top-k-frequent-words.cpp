class Solution {
public:
    
    struct comp                                     // comparison function for sorting by value in a pair
    {                                               // sorts in non-increasing then lexicographical order
        bool operator()(const pair<string,int> & l, const pair <string, int> & r) const     
        {
            if (l.second != r.second)               // comparing frequency
                return l.second > r.second;         
            return l.first < r.first;               // comparing lexical order
        }
    };
    
    vector<string> topKFrequent(vector<string>& words, int k) {
        map <string, int> um;                       // frequency map for strings
        for(int i=0;i<words.size();i++)             //storing frequencies of strings in the map
        {
            auto it =um.find(words[i]);
            if(it==um.end())
                um.insert({words[i],1});
            else
                it->second++;   
        }
        // now store the strings uniquely in a set accoring to sort function prepared
        set<pair<string,int>, comp> s (um.begin(),um.end());    
        auto it = s.begin();                        // iterator for pushing
        vector <string> ans;                        //output vector
        for(int i=0; i<k;i++)
        {   
            ans.push_back(it->first);               // pushing k strings
            it++;
        }
        return ans;
    }
};