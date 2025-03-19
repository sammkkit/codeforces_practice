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
    ll n, x; cin >> n >> x;
    if (x == 0) {
        for (int i = 0; i < n; i++) {
            cout << "0 ";
        }
        cout << endl;
        return;
    }
    
    // Find all allowed numbers (numbers that don't have bits not in x)
    vector<int> allowed;
    for (int i = 0; i <= 30; i++) {
        if ((i & (~x)) == 0) {
            allowed.push_back(i);
        } else {
            break; // First disallowed number gives us the mmax
        }
    }
    
    int mmax = allowed.size();
    vector<int> result;
    int current_or = 0;
    
    // Take as many allowed numbers as possible (maximizes MEX)
    for (int i = 0; i < min((int)n, mmax); i++) {
        result.push_back(allowed[i]);
        current_or |= allowed[i];
    }
    
    // If we haven't achieved the target OR
    if (current_or != x) {
        int missing = x & (~current_or);
        
        // Check if missing is allowed
        if ((missing & (~x)) == 0) {
            // If we have room, add the missing number
            if (result.size() < n) {
                result.push_back(missing);
                current_or |= missing;
            } else {
                // Replace the last element with the missing number
                current_or ^= result.back(); // Remove the contribution of the last element
                result.pop_back();
                result.push_back(missing);
                current_or |= missing;
            }
        } else {
            // If missing number has bits not in x, we need to use x directly
            if (result.size() < n) {
                result.push_back(x);
                current_or |= x;
            } else {
                // Replace the last element with x
                current_or ^= result.back();
                result.pop_back();
                result.push_back(x);
                current_or |= x;
            }
        }
    }
    
    // Fill remaining slots with zeros (won't affect OR or MEX)
    while (result.size() < n) {
        result.push_back(0);
    }
    
    // Verify the solution
    int final_or = 0;
    for (int val : result) {
        final_or |= val;
    }
    
    // Output the result
    for (int val : result) {
        cout << val << " ";
    }
    cout << "\n";
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