class Solution {
public:
    int characterReplacement(string s, int k) {
        int windowsize=0, maxyet=0, allowed = 0;
        vector<int> rec(26,0);
        for(int i=0; i<s.size();i++)
        {
            windowsize++;
            maxyet=max(maxyet, ++rec[s[i]-'A']);
            allowed = maxyet+k;
            if(windowsize>allowed)
            {
                rec[s[i-allowed]-'A']--;
                windowsize--;
            }
        }    
        return windowsize;
    }
};