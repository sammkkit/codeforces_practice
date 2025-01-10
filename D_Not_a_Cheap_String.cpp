#include <bits/stdc++.h>
#include <cmath>
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
    string w;
    cin >> w;
    int p;
    cin >> p;
    int price = 0;
    int n = w.size();
    int minn = INT_MAX;
    map<char, int> remove;
    for (int i = 0; i < n; i++) {
        price += (w[i] - 'a' + 1);
        minn = min(minn, (w[i] - 'a' + 1));
    }
    if (price <= p) {
        cout << w << endl;
        return;
    }
    if (minn > p) {
        cout << "" << endl;
        return;
    }
    string temp = w;
    int sum = price;
    sort(temp.begin(), temp.end());

    for (int i = n - 1; i >= 0; i--) {
        remove[temp[i]]++;
        sum -= (temp[i] - 'a' + 1);
        if (sum <= p) {
            break;
        }
    }
    for (int i = 0; i < n; i++) {
        if (remove.find(w[i]) != remove.end() && remove[w[i]] > 0) {
            remove[w[i]]--; 
        } else {
            cout << w[i]; 
        }
    }
    cout << endl;
}

int main() {
    fastio();
    int t;
    cin >> t; 
    while (t--) {
        solve();
    }
    return 0;
}
