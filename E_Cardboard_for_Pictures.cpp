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
using ld = long double;

void solve() {
    ll n,c;
    cin>>n>>c;
    vector<ll> arr(n);
    long long sum = 0;
    long long square =0;
    for(int i =0;i<n;i++){
        cin>>arr[i];
        sum+=arr[i];
        square += (arr[i]*arr[i]);
    }
    ld discriminant = (16.0 * sum * sum) - (16.0 * n * square) + (16.0 * n * c);
    ll temp1 = (ll)sqrt(discriminant);
    if (temp1 * temp1 < discriminant) temp1++;  
    if (temp1 * temp1 > discriminant) temp1--; 
    ll w = (temp1 - (4 * sum)) / (8 * n);
    cout<<w<<endl;
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