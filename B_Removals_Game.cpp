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
    int n;
    cin>>n;
    vector<int> a(n);
    f(i,0,n){
        cin>>a[i];
    }
    bool same = true;
    vector<int> b(n);
    f(i,0,n){
        cin>>b[i];
        if(a[i] != b[i]){
            same = false;
        }
    }
    if(same){
        cout<<"Bob"<<endl;
        return;
    }
    bool reverse = true;
    for(int i =0;i<n;i++){
        if(a[i] != b[n-i-1]){
            reverse = false;
            break;
        }
    }
    if(reverse){
        cout<<"Bob"<<endl;
        return;
    }
    cout<<"Alice"<<endl;
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