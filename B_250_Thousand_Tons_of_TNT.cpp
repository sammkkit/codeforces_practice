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
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) cin >> a[i];
    ll ans = -1;
    for (int d = 1; d <= n; ++d) {
        if (n % d == 0) {
            ll maxx= -1e18, minn = 1e18;
            for (int i = 0; i < n; i += d) {
                ll sm = 0;
                for (int j = i; j < i + d; ++j) {
                    sm += a[j];
                }
                maxx = max(maxx, sm);
                minn = min(minn, sm);
            }
            ans = max(ans, maxx - minn);
        }
    }
    cout << ans << '\n';
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