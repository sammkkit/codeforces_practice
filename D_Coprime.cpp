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

void solve(vector<unordered_map<int,bool>> &coprime) {
    int n ;
    cin>>n;
    vector<int> arr(n);
    map<int,int> mpp;
    for(int i =0;i<n;i++){
        cin>>arr[i];
        mpp[arr[i]] = i+1;
    }
    int ans = -1;
    for(const auto &pair: mpp){
        int num = pair.first;
        int index = pair.second;
        for (const auto &pair2 : mpp) {
            int num2 = pair2.first;
            int index2 = pair2.second;
            
            if (coprime[num].find(num2) != coprime[num].end()) {
                ans = max(ans, index + index2);
            }
        }
    }
    cout<<ans<<endl;
}
{
    
}
int main() {
    fastio();
    int t;
    t = 1;
    cin >> t;
    vector<unordered_map<int,bool>> coprime(1001);
    for(int i = 1;i<=1000;i++) {
        for(int j =1;j<=1000;j++) {
            if(__gcd(i, j)==1) {
                coprime[i][j] = true;
            }
        }
    }
    while (t--) {
        solve(coprime);
    }
    return 0;
}