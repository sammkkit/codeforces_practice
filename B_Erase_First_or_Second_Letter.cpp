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


// void ques(const string &s, int idx, unordered_set<string> &dp, int &cnt, string curr) {
//     if (idx == s.size()) {
//         if (dp.find(curr) == dp.end()) {
//             dp.insert(curr);
//             cnt++;
//         }
//         return;
//     }
//     ques(s, idx + 1, dp, cnt, curr + s[idx]);
//     ques(s, idx + 1, dp, cnt, curr);
// }

void solve() {
    int n;cin>>n;string s;cin>>s;
    map<char,int> mpp;
    int ans =0;
    for(int i =0;i<n;i++){
        if(mpp.find(s[i]) == mpp.end()){
            ans+=(n-i);
        }
        mpp[s[i]]++;
    }
    cout<<ans<<endl;
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