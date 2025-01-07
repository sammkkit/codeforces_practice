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
    string s;cin >> s;int n = s.size();
    if (count(s.begin(), s.end(), '?') == n) {
        cout << string(n, '1') << endl;
        return;
    }
    int i = 0;
    while (i < n && s[i] == '?') i++;
    char fill_char = i < n ? s[i] : '1';
    fill(s.begin(), s.begin() + i, fill_char);
    i = n - 1;
    while (i >= 0 && s[i] == '?') i--;
    fill_char = i >= 0 ? s[i] : '1';
    fill(s.begin() + i + 1, s.end(), fill_char);
    for (i = 1; i < n; i++) {
        if (s[i] == '?') s[i] = s[i - 1];
    }
    cout << s << endl;
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