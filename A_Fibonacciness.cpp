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
    vector<int> arr(4);
    for(int i=0;i<4;i++){
        cin>>arr[i];
    }
    int a3one= arr[0]+arr[1];
    int a3two = arr[2]-arr[1];
    int a3three = arr[3]-arr[2];

    if (a3one == a3two && a3one == a3three) {
        cout << 3 << endl; 
    } 
    else if (a3one == a3two || a3one == a3three || a3two == a3three) {
        cout << 2 << endl;  
    } 
    else {
        cout << 1 << endl;  
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