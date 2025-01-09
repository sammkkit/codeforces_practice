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
    int64_t n; cin >> n;
    vector<pair<int64_t, int64_t>> arr(n);
    int64_t sum = 0;
    vector<int64_t> ans(n);
    for(int64_t i = 0; i < n; i++) {
        cin >> arr[i].first;
        arr[i].second = i;
        ans[i] = i;
        sum += arr[i].first;
    }
    sort(arr.begin(), arr.end());
    vector<int64_t> temp(n);
    // cout<<sum<<endl;
    
    for(int64_t i = n - 1; i >= 0; i--) {
        temp[i] = sum;
        sum -= arr[i].first;
        // int cnt =0;
        int j = i+1;
        int64_t abc = temp[i];
        while (j<n && abc >= arr[j].first) {
            abc+= arr[j].first;
            j++;  
        }
        ans[i] += j-i;  
    }
    vector<int64_t> res(n);
    for(int64_t i = 0; i < n; i++) {
        res[arr[i].second] = ans[i];
    }
    for(int64_t i = 0; i < n; i++) {
        cout << res[i] -1<< " ";
    }
    cout << endl;
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