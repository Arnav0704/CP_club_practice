#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
	    int n;
	    cin >> n;
	    vector<long long> a(n);
	    for(int i = 0;i < n;i++) 
	        cin >> a[i];
	    sort(a.begin(), a.end());
	    long long mn = min({a[0]*a[0], a[0] * a.back(), a.back() * a.back()});
	    long long mx = max({a[0]*a[0], a.back() * a.back()});
	    cout << mn << ' ' << mx << '\n';
	}

}
