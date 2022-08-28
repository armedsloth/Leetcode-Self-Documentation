class Solution {
public:
    string getHint(string secret, string guess) {
        vector<int> sec(10,0);
        vector<int> gue(10,0);
        int acnt=0, bcnt=0, sz=secret.size();
        for(int i=0; i<sz; i++)
            if(secret[i]==guess[i])
                acnt++;
            else
            {
                sec[secret[i]-'0']++;
                gue[guess[i]-'0']++;
        
            }
        for(int i=0; i<10;i++)
            bcnt+= min (gue[i], sec[i]);
        return to_string(acnt)+"A"+to_string(bcnt)+"B";
}
};

