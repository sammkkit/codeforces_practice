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
 
const int INF = 1e9;
map<int,int> dp;
int recur(int n,vector<int> arr){
    //base
    if(n < 0){
        return INF;
    }
    if (n == 0) return 0;  
    if(dp.find(n)!=dp.end()) return dp[n];
    int minn = INF;
    for(int i =0;i<arr.size();i++){
        int temp;
        if(dp.find(n-arr[i])!=dp.end()) temp = dp[n-arr[i]];
        else temp = recur(n-arr[i],arr);
        if (temp != INF) { 
            minn = min(minn, temp + 1);
        }
    }
    dp[n] = minn;
    return minn;
}
void solve() {
    int n,x;
    cin>>n>>x;
    vector<int> arr(n);
    for(int i =0;i<n;i++)cin>>arr[i];
    int ans = recur(x,arr);
    cout<<ans<<endl;
    if (ans == INF){
        cout<<-1<<endl;
    }else{
        cout<<ans<<endl;
    }
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