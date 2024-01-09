#include <bits/stdc++.h>
using namespace std;
#define int long long

bool f(vector<int> &a, int mid, int h, int n) {
    int dmg = 0;
    for(int i = 0;i + 1 < n;i++) {
        dmg += min(mid, a[i+1] - a[i]);
        if(dmg >= h) return true;
    }
    dmg += mid;
    return dmg >= h;
}

void solve(){
    int n,h;
    cin>>n>>h;
    vector<int> a(n);
    for(auto &i : a) cin >> i;
    int low = 1, high = h, ans = -1;
    while(low <= high) {
        int mid = low + (high - low) / 2;
        if(f(a, mid, h, n)) {
            ans = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
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