#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;
    cin>>n;
    string s;
    cin >> s;
    int ans = 0,temp = 0;
    for(int i=0; i<n; i++){
        if(s[i] == '(') temp++;
        else {
            temp--;
            if(temp < 0) {
                ans++;
                temp = 0;
            }
        }

    }
    cout << ans << endl;

}

int32_t main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }

    
}