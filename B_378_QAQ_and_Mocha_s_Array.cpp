#include <bits/stdc++.h>
#define fastio()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
#define f(i, x, y) for (ll i = x; i < y; i++)
#define rf(i, x, y) for (ll i = x; i > y; i--)
#define enl "\n"
#define YES cout << "YES" << enl
#define NO cout << "NO" << enl
#define pb push_back
#define ff first
#define ss second
#define mp make_pair
typedef long long ll;
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    bool has1 = false;
    f(i, 0, n)
    {
        cin >> arr[i];
        if (arr[i] == 1)
        {
            has1 = true;
        }
    }
    if (has1)
    {
        YES;
        return;
    }
    sort(arr.begin(), arr.end());  
    vector<int> vis;
    for (int i = 1; i < n; i++) {
        if (arr[i] % arr[0] != 0) {
            vis.push_back(arr[i]);  
        }
    }
    if (vis.empty()) {
        YES;
        return;
    }
    sort(vis.begin(), vis.end());
    bool flag = false;
    for (int j = 1; j < vis.size(); j++) {
        if (vis[j] % vis[0] != 0) {
            flag = true;
            break;
        }
    }
    if (!flag) {
        YES;
    } else {
        NO;
    }
}

int main()
{
    fastio();
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
