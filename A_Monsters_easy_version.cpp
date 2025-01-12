#include <bits/stdc++.h>
#include <math.h>
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
    int64_t n;
    cin >> n;
    vector<int64_t> arr(n);
    for (int64_t &x : arr)
    {
        cin >> x;
    }
    sort(arr.begin(), arr.end());
    int64_t type1 = 0;
    if(arr[0] != 1){
        type1+= (arr[0]-1);
    }
    arr[0] = 1;
    for (int i = 0; i < n - 1; i++)
    {
        if ((arr[i + 1] - arr[i]) > 1)
        {
            // cout<<i<<endl;
            // cout<<arr[i+1]-arr[i]<<endl;
            type1 += (arr[i + 1] - arr[i] - 1);
            arr[i + 1] = arr[i] + 1;
        }
    }
    cout << type1<<endl;
}

int main()
{
    fastio();
    int64_t t;
    t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}