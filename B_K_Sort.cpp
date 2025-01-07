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
    vector<int64_t> a(n);
    
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    vector<int64_t> diffs;
    for (int i = 0; i < n - 1; i++) {
        int j = i + 1;
        if (a[i] > a[i + 1]) {
            while (j < n && a[j] < a[i]) {
                diffs.push_back(a[i] - a[j]);
                j++;
            }
        }
        i = j - 1;
    }

    int64_t ans = 0;
    int64_t size = diffs.size();
    sort(diffs.begin(), diffs.end());
    int64_t k = 0;
    int prev  = 0;
    while(k < size) {
        int diff = diffs[k] - prev;
        ans += ((size + 1 - k) * diff);
        prev = diffs[k];
        k++;
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