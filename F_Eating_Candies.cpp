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
    vector<int> weights(n);
    for(int i =0;i<n;i++){
        cin>>weights[i];
    }
    vector<int> prefix(n);
    vector<int> post(n);
    prefix[0] = weights[0];
    for(int i =1;i<n;i++){
        prefix[i] = prefix[i-1]+weights[i];
    }
    post[0] = weights[n-1];
    for(int i=1; i<n; i++) {
        post[i] = post[i-1] + weights[n-i-1];
    }
    int maxx =0;
    for(int i=0;i<n;i++){
        int prefSum = prefix[i];
        auto it = lower_bound(post.begin(),post.end(),prefSum) ;
        if (it != post.end() && *it == prefSum)  {
            int index = it-post.begin();
            if ((i + index) < n - 1) {
                maxx = max(maxx, i + index + 2);
            }
        }
    }
    cout<<maxx<<endl;
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