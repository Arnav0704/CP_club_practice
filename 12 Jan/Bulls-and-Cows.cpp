class Solution {
public:
    string getHint(string s, string t) {
        string ans;
        vector<int> vis(s.size());
        map<char,int> mp;
        int cnt = 0;
        for(int i = 0;i < s.size(); i++) {
            if(s[i] == t[i]) {
                cnt++;
                vis[i] = 1;
            }
            if(!vis[i]) mp[s[i]]++;
        }
        ans += to_string(cnt);cnt = 0;
        ans += 'A';
        for(int i = 0;i < s.size();i++) {
            if(!vis[i] && mp[t[i]]) {
                cnt++;
                mp[t[i]]--;
            }
        }
        ans += to_string(cnt);
        ans += 'B';
        return ans;
    }
};