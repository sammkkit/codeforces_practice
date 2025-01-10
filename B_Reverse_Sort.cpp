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
    int n;cin>>n;
    string s;
    cin>>s;
    vector<int> ans;
    int i =0,j=n-1;
    while(i<j){
        while(i<n && s[i]!='1'){
            i++;
        }
        while(j>=0 && s[j]!='0'){
            j--;
        }
        if(i<j){
            swap(s[i],s[j]);
            ans.push_back(i+1);
            ans.push_back(j+1);
        }
    }
    sort(ans.begin(),ans.end());
    if(ans.size() == 0){
        cout<<0<<endl;
        return;
    }
    cout<<1<<endl;
    cout<<ans.size()<<" ";
    for(auto i:ans){
        cout<<i<<" ";
    }
    cout<<endl;
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