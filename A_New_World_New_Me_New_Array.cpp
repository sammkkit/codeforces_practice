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
    int n,k,p;
    cin>>n>>k>>p;
    if (k > n * p || k < -n * p) {
        cout << -1 << endl;
        return;
    }
    int rem = abs(k)%p;
    if(rem == 0){
        cout<<abs(k)/p<<endl;
    }else{
        cout<<abs(k)/p +1 <<endl;
    }
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