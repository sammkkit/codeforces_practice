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
    int64_t n,q;
    cin>>n>>q;
    vector<pair<int64_t,int>> arr(n);
    unordered_map<int64_t, int> mpp;
    for(int i=0;i<n;i++){
        int64_t temp;
        cin>>temp;
        arr[i] = {temp,i};
    }
    vector<int64_t> x(q);
    for(int i=0;i<q;i++){
        cin>>x[i];
    }
     for (int i = 0; i < q; i++) {
        int64_t q_value = x[i];
        if (mpp.find(q_value) == mpp.end()) {  
            int64_t divisor = 1LL << q_value;  
            for (int j = 0; j < n; j++) {
                if (arr[j].first >= divisor && arr[j].first % divisor == 0) {
                    arr[j].first += (divisor / 2);  
                }
            }
            mpp[(q_value)]++; 
        }
    }

    vector<int64_t> ans(n);
    for(int i = 0; i < n; i++) {
        int index = arr[i].second;
        int64_t value = arr[i].first;
        ans[index] = value;
    }
    
    for(int i = 0; i < n; i++) {
        cout << ans[i] << " ";
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
