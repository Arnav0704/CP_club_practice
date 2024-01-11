#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve(){
    int n, d;
    cin>>n>>d;
    vector<int> a(n);
    for(auto &i : a) cin >> i;
    int ans = 0;
    sort(a.rbegin(), a.rend());
    int j = n-1;
    for(int i = 0;i <= j;i++) {
        int temp = d/a[i] + 1;
        j -= temp - 1;
        if(j >= i) ans++;
    }
    cout << ans << '\n';
    
    

}

int32_t main(){
    int t = 1;
    // cin>>t;
    while(t--){
        solve();
    }

    
}