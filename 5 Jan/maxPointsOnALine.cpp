class Solution {
public:
    int maxPoints(vector<vector<int>>& v) {
       
        int ans = 1,temp;
        for(int i = 0;i < v.size();i++) {
            map<double,int> mp;
            temp = 1;
            for(int j = 0;j < v.size();j++) {
                if(i == j) continue;
                if(v[i][0] == v[j][0]) temp++;
                else {
                    mp[(double)(v[i][1] - v[j][1]) / (double)(v[i][0] - v[j][0])]++;
                    ans = max(ans,1 + mp[(double)(v[i][1] - v[j][1]) / (double)(v[i][0] - v[j][0])]);
                }
            }
        }
        return max(temp, ans);
    }
};