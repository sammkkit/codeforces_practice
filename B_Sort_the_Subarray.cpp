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
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    vector<int> adash(n);
    for (int i = 0; i < n; i++) {
        cin >> adash[i];
    }
    
    int i = 0, j = n - 1;
    while (i < n && a[i] == adash[i]) {
        i++;
    }
    while (j >= 0 && a[j] == adash[j]) {
        j--;
    }
    if (i > j) {
        cout << "1 1" << endl;
        return;
    }
    int l = i - 1;
    int r = j + 1;
    while (l >= 0 && a[l] <= adash[i]) {
        i--;
        l--;
    }
    while (r < n && a[r] >= adash[j]) {
        j++;
        r++;
    }

    cout << i + 1 << " " << j + 1 << endl; 
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