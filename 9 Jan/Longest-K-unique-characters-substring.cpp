class Solution{
  public:
    int longestKSubstr(string s, int k) {
        map<char, int> mp;
        int i = 0,j = 0,n = s.size(),size = -1;
        while(j < n) {
            mp[s[j]]++;
            if(mp.size() < k) j++;
            else if(mp.size() == k) size = max(size, j - i + 1),j++;
            else {
                while(mp.size() > k) {
                    mp[s[i]]--;
                    if(mp[s[i]] == 0) mp.erase(s[i]);
                    i++;
                }
                j++;
            }
        }
        return size;
    }
};