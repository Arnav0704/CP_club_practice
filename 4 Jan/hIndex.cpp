class Solution {
public:
    int hIndex(vector<int>& a) {
        sort(a.begin(), a.end());
        int n = a.size(),i;
        for(i=0; i<n; i++)
        {
            if(a[n-i-1] < (i+1))
              break;
        }

        return i;
    }
};