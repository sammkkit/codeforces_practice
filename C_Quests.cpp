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
    int n,k;cin>>n>>k;
    vector<int> a(n);
    vector<int> b(n);
    f(i,0,n){
        cin>>a[i];
    }
    f(i,0,n){
        cin>>b[i];
    }
    int sum =0;
    int maxx =-1;
    int ans =0;
    int j =0;
    int temp = min(n,k);
    for(int i=0;i<temp;i++){
        sum+=a[i];
        maxx = max(maxx,b[i]);
        ans = max(ans , sum+ maxx*k - maxx - maxx*i);
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