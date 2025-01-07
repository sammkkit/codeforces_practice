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

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t; cin>>t;
    while(t--){
        int l, r; cin>>l>>r;
        int x, y; cin>>x>>y;
        int ans = 0;
        if(x==l && y==r) ans = y-x;
        else if(x>r || y<l) ans = 1;
        else if(x>l && y<r){
            ans = 2 + (y-x);
        }
        else if(l>x && r<y){
            ans = 2 + (r-l);
        }
        else{
            if((x>l && x<r) || (y>l && y<r)){
                if(y>r || y<r) ans++;
                if(x>l || x<l) ans++;
                if((x>l && x<r)) ans += (r-x);
                else if(y>l && y<r) ans += (y-l);
            }
            else{
                if(r>y || r<y) ans++;
                if(l>x || l<x) ans++;
                if((l>x && l<y)) ans += (y-l);
                else ans += (r-x);
            }
        }
        cout<<ans<<endl;
    }
}

// int main() {
//     fastio();
//     int t;
//     t = 1;
//     cin >> t;
//     while (t--) {
//         solve();
//     }
//     return 0;
// }