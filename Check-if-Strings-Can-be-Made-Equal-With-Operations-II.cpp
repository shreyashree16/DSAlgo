class Solution {
public:
    bool checkStrings(string s1, string s2) {
        map<int,int> mp;
        string p,q,r,t;
        int n=s1.length();
        for(int i=0;i<n;i++){
            if(i%2==0){
                p+=s1[i];
                r+=s2[i];
            }
            else{
                q+=s1[i];
                t+=s2[i];
            }
        }
        sort(p.begin(),p.end());
         sort(r.begin(),r.end());
          sort(q.begin(),q.end());
           sort(t.begin(),t.end());
           if(p==r && q==t)
           return true;
           return false;
        
    }
};