#define ll long long

bool f(vector<int>& a, int n, int m, int ma) {
    int cnt = 1,temp = 0;
    for(int i = 0;i < n;i++) {
        if(temp + a[i] <= ma) {
            temp += a[i];
        } else {
            cnt++;
            if(cnt > m) return false;
            temp = a[i];
        }
        
    }
    return true;
}


int findPages(vector<int>& arr, int n, int m) {
    if(n < m) return -1;
    ll low = *max_element(arr.begin(), arr.end()), high = accumulate(arr.begin(), arr.end(), 0ll),ans = -1;
    while(low <= high) {
        ll mid = low + (high - low) / 2;
        if(f(arr, n, m, mid)) {
            high = mid - 1;
            ans = mid;
        } else {
            low = mid + 1;
        }
    }
    return ans;
}