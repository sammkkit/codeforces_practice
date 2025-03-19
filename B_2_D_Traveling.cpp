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
    int n, k, a, b;
    cin >> n >> k >> a >> b;
    a--, b--; 

    vector<pair<int64_t, int64_t>> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i].first >> arr[i].second;
    }
    int64_t directDist = abs(arr[a].first - arr[b].first) + abs(arr[a].second - arr[b].second);
    
    if (k == 0) {
        cout << directDist << endl;
        return;
    }
    int64_t closestToA = LLONG_MAX, closestToB = LLONG_MAX;

    for (int i = 0; i < k; i++) { 
        int64_t distA = abs(arr[i].first - arr[a].first) + abs(arr[i].second - arr[a].second);
        int64_t distB = abs(arr[i].first - arr[b].first) + abs(arr[i].second - arr[b].second);
        closestToA = min(closestToA, distA);
        closestToB = min(closestToB, distB);
    }
    int64_t viaMajor = closestToA + closestToB;

    cout << min(directDist, viaMajor) << endl;
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