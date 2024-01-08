#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;
    cin>>n;
    string s;
    cin >> s;
    map<char,int> mp;
    for(int i = 0;i < n;i++) {
        mp[s[i]]++;
    }
    int cnt = INT_MIN;
    for(auto i : mp) {
        cnt = max(cnt,i.second);
    }
    if(cnt > n / 2) {
        cout << cnt - (n - cnt) << '\n';
    } else {
        if(n & 1) cout << 1 << '\n';
        else cout << 0 << '\n';
    }
    

}

int32_t main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }

    
}