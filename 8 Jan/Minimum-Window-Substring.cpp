class Solution {
public:
    string minWindow(string s, string t) {
        int i = 0, j = 0,n = s.size(), m = t.size();
        map<char,int> mp;
        for(auto i : t) mp[i]++;
        int si = mp.size(),si2 = 0,start = 0,size = INT_MAX;
        map<char, int> mp2;
        while(j < n) {
            while(j < n && si != si2) {
                mp2[s[j]]++;
                if(mp2[s[j]] == mp[s[j]]) {
                    si2++;
                }
                j++;
            }
            
            while(i <= j && si == si2) {
                if(j - i < size) {
                    size = j - i;
                    start = i;
                }
                mp2[s[i]]--;
                if(mp2[s[i]] < mp[s[i]]) si2--;
                i++;
            }
        }
        return size == INT_MAX ? "" : s.substr(start, size);
    }
};