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
    ll n;cin>>n;
    string s;
    cin>>s;
    if(n < 3){
        cout<<0<<endl;
        return;
    }
    ll dash=0,under=0;
    for(char i:s){
        if(i == '-'){
            dash++;
        }else{
            under++;
        }
    }
    if(dash < 2){
        cout<<0<<endl;
        return;
    }
    ll leftdash = floor(dash/2);
    ll rightdash = dash-leftdash;
    cout<<under*rightdash*leftdash<<endl;
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