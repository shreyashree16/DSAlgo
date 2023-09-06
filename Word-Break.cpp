class Solution {
public:
    bool wordBreak(string s, vector<string>& dict) {
        set<string> wdict;
        for(auto it:dict)
        wdict.insert(it);
        if(wdict.size()==0)
        return false;
        vector<bool> dp(s.size()+1,false);
        dp[0]=true;
        for(int i=1;i<=s.size();i++){
            for(int j=i-1;j>=0;j--){
                if(dp[j]){
                    string ans=s.substr(j,i-j);
                   if(wdict.find(ans)!= wdict.end()){
                        dp[i]=true;
                        break;
                    }
                }
            }
        }
        for(auto it:dp)
        cout<<it<<" ";
        return dp[s.size()];
    }
};