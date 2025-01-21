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
    string s;
    cin>>s;
    map<char,int> mpp;
    for(int i=0;i<n;i++){
        mpp[s[i]]++;
    }
    if(n>26){
        cout<<-1<<endl;
        return;
    }
    if(mpp.size() == n){
        cout<<0<<endl;
        return;
    }
    int freq2 = 0;
    for(auto x:mpp){
        if(x.second>26){
            cout<<-1<<endl;
            return;
        }
        if(x.second>1){
            freq2++;
        }
    }
    if(mpp.size()==26 && freq2>(26-mpp.size())){
        cout<<-1<<endl;
        return;
    }
    cout<<n-mpp.size()<<endl;
}

int main() {
    fastio();
    int t;
    t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}