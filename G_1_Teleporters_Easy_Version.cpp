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
bool customComparator(const pair<int64_t, int64_t>& a, const pair<int64_t, int64_t>& b){
    if(a.first == b.first){
        return a.second < b.second;
    }
    return a.first < b.first;
}
void solve() {
    int64_t n ,c;cin>>n>>c;
    vector<int64_t> arr2(n);
    for(int i =0;i<n;i++){
        int64_t cost;
        cin >> cost;
        arr2[i] = cost+i+1;
    }
    sort(arr2.begin(),arr2.end());
    int64_t budget = c;
    int64_t i = 0;
    int64_t ans = 0;

    while(i < n && budget>=0){
        budget -= arr2[i];
        if(budget >= 0){
            ans++;
            i++;
        }
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