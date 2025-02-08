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
    string s;
    cin>>s;
    int n = s.size();
    vector<pair<pair<int,int>,char>> vec(n);
    int pre = 0;
    for(int i =0;i<n;i++){
        vec[i] = {{pre,i},s[i]};
        pre += (s[i] == '(') ? 1 : -1;
    }
    sort(vec.begin(), vec.end(), [](const auto& a, const auto& b) {
        if (a.first.first != b.first.first) {
            return a.first.first < b.first.first; 
        }
        return a.first.second > b.first.second;
    });
    string ans = "";
    for(int i =0;i<n;i++){
        ans+= vec[i].second;
    }
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