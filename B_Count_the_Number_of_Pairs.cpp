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

bool islowercase(char c){
    return  c>=97 && c <= 122 ;
}
void solve() {
    int n,k;
    cin>>n>>k;
    string s;cin>>s;
    map<char,int> mpp;
    for(int i =0;i<n;i++){
        mpp[s[i]]++;
    }
    int ans =0;
    for(const auto&pair:mpp){
        char c =pair.first;
        if(islowercase(c)){
            char upper = toupper(c);
            int common = min(mpp[upper], mpp[c]);
            ans += common;
            mpp[upper] -= common;
            mpp[c] -= common;
        }else{
            char lower = tolower(c);
            int common = min(mpp[lower], mpp[c]);
            ans += common;
            mpp[lower] -= common;
            mpp[c] -= common;
        }
    }
    int temp =0;
    for(const auto&pair:mpp){
        temp+= (pair.second/2);
    }
    if(temp < k){
        cout<<ans+temp<<endl;
    }else{
        cout<<ans+k<<endl;
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