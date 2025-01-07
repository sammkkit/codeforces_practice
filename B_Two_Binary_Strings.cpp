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
    string a,b;
    cin>>a>>b;
    int n = a.size();
    for(int i =0;i<n-1;i++){
        if(a[i] == '0' && a[i+1] == '1' && b[i] == '0' && b[i+1] == '1'){
            cout<<"YES"<<enl;
            return;     
        }
    }
    cout<<"NO"<<endl;
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