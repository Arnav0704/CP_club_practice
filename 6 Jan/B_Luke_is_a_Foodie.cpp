#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n,x;
    cin>>n>>x;
    vector<int> a(n);
    for(auto &i : a) cin >> i;
    int mx = a[0], mn = a[0], ans = 0;
    for(int i = 0;i < n;i++) {
        if(mx < a[i]) mx = a[i];
        if(mn > a[i]) mn = a[i];
        if(mx - mn > 2 * x) {
            ans++;
            mx = a[i];
            mn = a[i];
        }
    }
    cout << ans << '\n';
}

int32_t main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}