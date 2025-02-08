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
    string s;
    cin>>s;
    int n = s.size();
    int i= 0;
    int j = 0;
    int prevone =-1;
    int nextone = -1;
    int ans =-1;
    while(i < n){
        while(i<n && s[i] != '1'){
            i++;
        }
        j =i+1;
        while(j<n && s[j] != '1'){
            j++;
        }
        int currMaxZero = 0;
        if (i < n && j < n) { 
            int temp = (j + i) / 2;
            currMaxZero = max(temp - i, j - temp);
        } else if (i < n && j >= n) { 
            currMaxZero = max(i, n - i - 1);
        }
        ans = max(ans, currMaxZero);
        i = j;
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