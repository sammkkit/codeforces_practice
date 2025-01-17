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
bool valid(string bracket) {
    int temp = 0;
    for (char c:bracket) {
        if (c == '(') {
            temp++;
        } else {
            temp--;
        }
        if (temp < 0) {
            return false;
        }
    }
    return temp == 0;  
}
void solve() {
  string a;
  int temp;
  cin>>a;
  
  int n=a.size();
for (int i = 0; i < 8; i++) {
    string bracket = "";
    for (int j = 0; j < n; j++) {
        if (a[j] == 'A') {
            bracket += ((i & 1) ? ')' : '(');  
        } else if (a[j] == 'B') {
            bracket += ((i & 2) ? ')' : '(');  
        } else {
            bracket += ((i & 4) ? ')' : '(');  
        }
    }
    if (valid(bracket)) {
        cout << "YES" << endl;
        return;
    }
}
cout << "NO" << endl;
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