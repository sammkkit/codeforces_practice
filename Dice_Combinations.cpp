#include <bits/stdc++.h>
#include <math.h>
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define f(i, x, y) for(ll i = x; i < y; i++)
#define rf(i, x, y) for(ll i = x; i > y; i--)
#define enl "\n"
#define YES cout << "YES" << enl
#define NO cout << "NO" << enl
#define pb push_back
#define ff first
#define ss second
#define mp make_pair
typedef long long ll;
using namespace std;

const int MOD = 1e9 + 7;
unordered_map<int, int> memo; 

int recur(int n) {
    if (n == 0) return 1;  
    if (n < 0) return 0;  
    if (memo.find(n) != memo.end()) return memo[n];

    int ways = 0;
    for (int i = 1; i <= 6; i++) {  
        ways = (ways + recur(n - i)) % MOD;
    }

    return memo[n] = ways;
}
void solve() {
    int n ;
    cin>>n;
    int ans = recur(n);
    cout<<ans<<endl;
}

int main() {
    fastio();
    int t;
    t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}