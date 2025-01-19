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
    int n, k;
    cin >> n >> k;
    vector<int> x(n);
    map<int, int> freq;
    for (int i = 0; i < n; i++)
    {
        cin >> x[i];
        freq[x[i]]++;
    }
    int score = 0;
    for (auto &pair : freq)
    {
        int num = pair.first;
        int inverse = k - num;
        if (inverse > 0 && inverse <= n && freq.count(inverse))
        {
            int pairs = min(freq[num], freq[inverse]);

            if (num == inverse)
            {
                pairs=freq[num]/2;
            }

            score += pairs;
            freq[num] -= pairs;
            freq[inverse] -= pairs;
        }
    }

    cout << score << endl;
}

int main()
{
    fastio();
    int t;
    t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}