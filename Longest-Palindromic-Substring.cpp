class Solution {
public:
    string longestPalindrome(string s) {
        pair<int,int> p;
        helper(s,p);
        string str;
        for(int i=p.first;i<=p.second;i++)
        str=str+s[i];
        return str;
    }
    pair<int,int> helper(string s,pair<int,int>& p){
        int l,h;
        int n=s.length();
        int start=0,end=1;
        //for even length
        for(int i=1;i<n;i++){
          l=i-1;
          h=i;
          while(l>=0 && h<n && s[l]==s[h]){
              if(h-l+1>end){
                 start=l;
                 end=h-l+1;
              }
              l--;
              h++;
          }
           //for odd length
          l=i-1;
          h=i+1;
          while(l>=0 && h<n && s[l]==s[h]){
              if(h-l+1>end){
                 start=l;
                 end=h-l+1;
              }
              l--;
              h++;
          }
        }
        p.first=start;
        p.second=end+start-1;
        return p;
    }
};