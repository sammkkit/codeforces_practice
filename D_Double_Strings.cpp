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
    vector<string> arr(n);
    map<string, int> mpp;
    for(int i = 0; i < n; i++) {
        string s;
        cin >> s;
        arr[i] = s;
        mpp[s]++;
    }
    string ans;
    for(int i = 0; i < n; i++) {
        string s = arr[i];
        bool flag = false;
        string prefix = "";
        string suffix = "";
        for(int k = 1; k < s.size(); k++) {
            prefix += s[k-1];
            suffix = s.substr(k);
            if(mpp.find(prefix) != mpp.end() && mpp.find(suffix) != mpp.end()) {
                flag = true;
                break;
            }
        }
        
        ans += (flag ? '1' : '0');
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