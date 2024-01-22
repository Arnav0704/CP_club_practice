#include <bits/stdc++.h>
using namespace std;
 
#define MOD 1000000007
#define maxn 100000000000017    
#define nl "\n"
#define cnl cout<<"\n"
#define mk make_pair
#define pi pair<int, int>
#define pll pair<ll, ll>
#define vi vector<int>
#define all(v) v.begin(),v.end()
#define all1(v) v.rbegin(),v.rend()
#define vll vector<ll>
#define vld vector<ld>
#define vpll vector<pll>
#define ff first
#define ss second
#define pb push_back
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define umpi unordered_map<int,int> mp
#define umpll unordered_map<ll,ll> mp
typedef long long ll;
typedef long double ld;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define bitcnt(n) __builtin_popcount(n)
#define mask(i) (1 << (i))
#define bitmask(n, i) (((n) >> (i)) & 1)
#define set_on(n, i) ((n) | mask(i))
#define set_off(n, i) ((n) & ~mask(i))
#define f1(i, n) for(int i = 1; i <= n; i++)
#define f0(i, n) for(int i = 0; i < n; i++)
#define fe(x, v) for(auto x : v)
#define getunique(v) {sort(all(v)); v.erase(unique(all(v)), v.end());}
#define readgraph(list, edges) for (int i = 0; i < edges; i++) {int a, b; cin >> a >> b; a--; b--; list[a].pb(b); list[b].pb(a);}

/*---------------------------------------------------------------------------------------------------------------------------*/
ll gcd(ll a, ll b) {if (b > a) {return gcd(b, a);} if (b == 0) {return a;} return gcd(b, a % b);}
ll expo(ll a, ll b, ll mod) {ll res = 1; while (b > 0) {if (b & 1)res = (res * a) % mod; a = (a * a) % mod; b = b >> 1;} return res;}
void extendgcd(ll a, ll b, ll*v) {if (b == 0) {v[0] = 1; v[1] = 0; v[2] = a; return ;} extendgcd(b, a % b, v); ll x = v[1]; v[1] = v[0] - v[1] * (a / b); v[0] = x; return;} //pass an arry of size1 3
ll mminv(ll a, ll b) {ll arr[3]; extendgcd(a, b, arr); return arr[0];} //for non prime b
ll mminvprime(ll a, ll b) {return expo(a, b - 2, b);}
bool revsort(ll a, ll b) {return a > b;}
ll lcm(ll a, ll b) {return (a / gcd(a, b)) * b;}
ll Mul(ll x, ll n, ll M) {ll ans = 0; for(;n; n /= 2, x = (x + x) % M)  if(n & 1) ans = (ans + x) % M; return ans;}
ll Pow(ll x, ll n, ll M) {ll ans = 1; for(;n; n /= 2, x = Mul(x, x, M)) if(n & 1) ans = Mul(ans, x, M); return ans;}
ll Pow(ll x, ll n) {ll ans = 1; for(;n; n /= 2, x = x * x) if(n & 1) ans = ans * x; return ans;}
ll combination(ll n, ll r, ll m, ll *fact, ll *ifact) {ll val1 = fact[n]; ll val2 = ifact[n - r]; ll val3 = ifact[r]; return (((val1 * val2) % m) * val3) % m;}
void google(int t) {cout << "Case #" << t << ": ";}
vector<ll> sieve(int n) {int*arr = new int[n + 1](); vector<ll> vect; for (int i = 2; i <= n; i++)if (arr[i] == 0) {vect.push_back(i); for (int j = 2 * i; j <= n; j += i)arr[j] = 1;} return vect;}
ll mod_add(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a + b) % m) + m) % m;}
ll mod_mul(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a * b) % m) + m) % m;}
ll mod_sub(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a - b) % m) + m) % m;}
ll mod_div(ll a, ll b, ll m) {a = a % m; b = b % m; return (mod_mul(a, mminvprime(b, m), m) + m) % m;}  //only for prime m
ll phin(ll n) {ll number = n; if (n % 2 == 0) {number /= 2; while (n % 2 == 0) n /= 2;} for (ll i = 3; i <= sqrt(n); i += 2) {if (n % i == 0) {while (n % i == 0)n /= i; number = (number / i * (i - 1));}} if (n > 1)number = (number / n * (n - 1)) ; return number;} //O(sqrt(N))
/*--------------------------------------------------------------------------------------------------------------------------*/

void solve(){
    int n;
    cin>>n;
    string s;
    cin >> s;
    int one = 0,zero = 0;
    for(int i = 0;i<n;i++){
        if(s[i] == '1') {
            if(i & 1) {
                one++;
            } else one--;
        } else {
            if(i & 1) {
                zero++;
            } else zero--;
        }
    }
    if(one == 0 || zero == 0) yes;
    else no;
}

int main(){
    fast 
    ll t;
    cin>>t;
    while(t--){
        solve();
    }

    
}