class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& str) {
        map<string,vector<string>> mp;
        for(int i=0;i<str.size();i++){
          string s=str[i];
          sort(s.begin(),s.end());
          mp[s].push_back(str[i]);
        }
        vector<vector<string>> ans;
        for(auto it:mp)
        ans.push_back(it.second);

        return ans;
    }
};