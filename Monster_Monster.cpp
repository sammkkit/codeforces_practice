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

void solve() {
    int n, x;
    cin >> n >> x;
    vector<long long> arr(n);
    for(int i = 0; i < n; i++) cin >> arr[i];
    
    long long ans = 0;
    sort(arr.rbegin(), arr.rend());
    for(int i = 0; i < n; i++) {
        long long required_attack = arr[i] + (i * x); 
        ans = max(ans, required_attack);
    }
    
    cout << ans << endl;
}

int main() {
    fastio();
    int t;
    t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}