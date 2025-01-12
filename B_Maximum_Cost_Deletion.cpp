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
    int n,a,b;
    cin>>n>>a>>b;
    string s;
    cin>>s;
    if(b>=0){
        int ans = n*(b+a) ;
        cout<<ans<<endl;
        return; 
    }
    int l=0;
    int one=0;
    int ans =0;
    for (int i = 0; i < n; i++) {
        if (s[i] == '1') {
            one++;
        } else {
            int j = i;
            while (j < n && s[j] == '0') {
                j++;
            }
            ans += (a*(j-i)+b);  
            i = j - 1;
        }
    }
    if(one!=0) ans+=(a*one +b);
    int l2=0;
    int one2=0;
    int ans2 =0;
    for (int i = 0; i < n; i++) {
        if (s[i] == '0') {
            one2++;
        } else {
            int j = i;
            while (j < n && s[j] == '1') {
                j++;
            }
            ans2 += (a*(j-i)+b);  
            i = j - 1;
        }
    }
    // cout<<one<<" "<<ans<<" "<<one2<<" "<<ans2<<endl;
    if(one2!=0) ans2+=(a*one2 +b);
    cout<<max(ans,ans2)<<endl;
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