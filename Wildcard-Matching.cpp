class Solution {
public:
    bool isMatch(string s, string t) {
        int n=s.length();
        int m=t.length();
        int i=0,j=0;
        int si=-1;
        int match=0;
        while(i<n){
            if(j<m && (t[j]=='?'||t[j]==s[i])){
               i++;j++;
            }
            else if(j<m && t[j]=='*'){
                si=j;
                match=i;
                j++;
            }
            else if(si!=-1){
                j=si+1;
                match++;
                i=match;
            }
            else
            return false;
        }
        while(j<m && t[j]=='*')
        j++;
        return j==m;
    }
};