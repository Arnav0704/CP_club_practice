#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    string s; int n ; string l , r; cin >> s >> n >> l >> r;

        int last = -1;
        vector<vector<int>> idx(10 );
        for (int i=0;i<s.size();i++){
            idx[s[i]-'0'].push_back(i);
        }

        for (int i=0;i<n;i++){
            int mx =last  +1;
            for(auto v=l[i];v<=r[i];v++){
                auto it = upper_bound(idx[v-'0'].begin(), idx[v-'0'].end() , last);
                if (it==idx[v-'0'].end()){
                    mx = s.size();
                }else{
                    mx = max((*it) , mx);
                }
            }
            last= mx;
            if ( last==s.size()){
                break;
            }
        }
        if (last < s.size()){
            cout << "NO\n";
        }else{
            cout << "YES\n";
        }
    
    

}

int32_t main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }

    
}