class Solution {
public:
    string getHint(string secret, string guess) {
        vector<int> sec(10,0);
        vector<int> gue(10,0);
        int bcnt=0, ccnt=0;
        for(int i=0;i<secret.size();i++)
        {
            if(secret[i]==guess[i])
                bcnt++;
            else
            {
                sec[secret[i]-'0']++;
                gue[guess[i]-'0']++;
            }
        }
        for(int i=0; i<10; i++)
        {
            ccnt+=min(gue[i],sec[i]);
        }
        return to_string(bcnt)+"A"+to_string(ccnt)+"B";
    }
};