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
    auto countInversions = [&](const vector<int>& arr) {
        int inv = 0;
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (arr[i] > arr[j]) {
                    inv++;
                }
            }
        }
        return inv;
    };
    int initialInversions = countInversions(a);
    
    int best_l = 1, best_r = 1;
    int minInversions = initialInversions;
    for (int l = 0; l < n; l++) {
        for (int r = l; r < n; r++) {
            vector<int> shifted = a;
            
            if (l < r) {
                int temp = shifted[l];
                for (int i = l; i < r; i++) {
                    shifted[i] = shifted[i + 1];
                }
                shifted[r] = temp;
                int newInversions = countInversions(shifted);
                
                if (newInversions < minInversions) {
                    minInversions = newInversions;
                    best_l = l + 1; 
                    best_r = r + 1;
                }
            }
        }
    }
    
    cout << best_l << " " << best_r << endl;
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