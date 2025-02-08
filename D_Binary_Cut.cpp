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
    int ans = 1;
    int zeroOne = 0;
    int n = s.size();
    for(int i =0;i<n-1;i++){
        if(s[i] == '1' && s[i+1] == '0'){
            ans++;
        }
        if(s[i] == '0' && s[i+1] == '1'){
            zeroOne++;
        }
    }
    if(zeroOne > 1){
        ans = ans+zeroOne-1;
    }
    cout<<ans<<endl;
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