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
    int n;cin>>n;vector<int> a(n);
   
    map<int,pair<vector<int>,int>> mpp;
    // number -> {indices,count}
    f(i,0,n){
        cin>>a[i];
        mpp[a[i]].first.push_back(i);
        mpp[a[i]].second++;
    }
    if(n<3){
        cout<<-1<<endl;return;
    }
    int hastwo =0;
    vector<int> two1;
    vector<int> two2;
    for(const auto&pair:mpp){
        if(pair.second.second>=2){
            hastwo++;
            if(two1.empty()){
                two1 = pair.second.first;
            }else{
                two2 = pair.second.first;
            }
        }
    }
    if(hastwo <2){
        cout<<-1<<endl;
        return;
    }
        vector<int> ans(n,1);
        ans[two1[0]] = 1;
        ans[two1[1]] = 2;
        ans[two2[0]] = 1;
        ans[two2[1]] = 3;
        for(int i =0;i<n;i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
        return;
    
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