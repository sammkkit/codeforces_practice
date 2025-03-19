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
    long long n, x;
    cin >> n >> x;
    vector<long long> arr(n);
    long long maxx = -1;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        maxx = max(maxx, arr[i]);
    }
    long long low = 1, high = maxx + x, mid, curr;
    while (low <= high) {
        mid = (low + high) / 2;
        curr = 0;
        for (int i = 0; i < n; i++) {
            curr += max(0LL, mid - arr[i]);
        }
        if (curr > x) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    cout << low -1<< endl;
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