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
    if(n == 1 || (n == 2 && s[0] != s[1])){
        cout<<-1<<endl;
        return;
    }else if(n==2){
        cout<<s<<endl;
        return;
    }
    for(int i =0;i<n-1;i++){
        if(i<n-2 && s[i]!=s[i+1] && s[i+1]!=s[i+2] && s[i]!=s[i+2] ){
            cout<<s[i]<<s[i+1]<<s[i+2]<<endl;
            return;
        }else if(s[i] == s[i+1]){
            cout<<s[i]<<s[i+1]<<endl;
            return;
        }
    }
    cout<<-1<<endl;
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