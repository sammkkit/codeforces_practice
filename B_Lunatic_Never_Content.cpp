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
void solve(int t) {
    int n;
    cin>>n;
    vector<ll>arr(n);
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    ll maxx = 0;
    for(int i =0;i<n/2;i++){
        ll val = abs(arr[i]-arr[n-i-1]);
        maxx = __gcd(maxx,val);
    }
    cout<<maxx<<endl;
}

int main() {
    fastio();
    int t;
    t = 1;
    cin >> t;
    while (t--) {
        solve(t);
    }
    return 0;
}