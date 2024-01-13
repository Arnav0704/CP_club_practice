class Solution {
public:
    int minAddToMakeValid(string s) {
        int ans = 0, cnt = 0;
        for(int i = 0;i < s.size();i++) {
            cnt += (s[i] == '(');
            cnt -= (s[i] == ')');
            if(cnt < 0) ans++,cnt = 0;
        }
        ans += abs(cnt);
        return ans;
    }
};