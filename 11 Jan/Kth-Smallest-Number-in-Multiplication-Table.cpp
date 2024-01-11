class Solution {
public:
    int findKthNumber(int m, int n, int k) {
        long long int low = 1, high = m*1LL*n,mid,x,ans;
        while(low<high){
            mid = (high-low)/2+low;
            x = 0;
            for(int i = 1; i <= m; i++){
                if(mid>=i*n){
                    x += n;
                }else{
                    x += (mid/i);
                }
            }
            if(x>=k){
                high = mid;
            }else{
                low = mid+1;
            }
        }
        return low;
    }
};