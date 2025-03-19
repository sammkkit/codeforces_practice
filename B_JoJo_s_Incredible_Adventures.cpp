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
    string st;
    cin>>st;
    ll n = st.size();
    string s = st+st;
    ll one = 0;
    for (char c : st) {
        if (c == '1') {
            one++;
        }
    }
    if(one==0){
        cout<<0<<endl;
        return;
    }
    if(one == n){
        long long ans = n*n;
        cout<<ans<<endl;
        return;
    }
    if(n ==1 ){
        cout<<1<<endl;
        return;
    }
    ll len = 0;
    ll maxx = 0;
    for(int i =0;i<(2*n);i++){
        if(s[i] == '1'){
            len++;
            maxx = max(maxx, len);
        }else{
            len = 0;
        }
    }
    ll ans = maxx;
    ll k = 1;
    while(maxx  >= 1){
        ans = max(maxx*k , ans);
        maxx--;
        k++;
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