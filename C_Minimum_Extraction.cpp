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
#define int64 int64_t
typedef long long ll;
using namespace std;

void solve() {
    int64 n;
    cin>>n;
    vector<int> arr(n);
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    int64 maxx = arr[0];
    int64 tosub = arr[0];
    for(int64 i =1;i<n;i++){
        int64 newmin = arr[i] - tosub;
        maxx = max(maxx,newmin);
        tosub += newmin;
    }
    cout<<maxx<<endl;
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