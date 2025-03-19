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
    ll n, x;
    cin >> n >> x;
    
    ll temp = 0;
    vector<ll> arr(n);

    for (int i = 0; i < 3; i++) { 
        for (int j = 0; j < n; j++) cin >> arr[j];
        for (int j = 0; j < n; j++) {
            if ((x | arr[j]) != x) break; 
            temp |= arr[j];  
        }
    }

    cout << (temp == x ? "Yes" : "No") << endl;
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