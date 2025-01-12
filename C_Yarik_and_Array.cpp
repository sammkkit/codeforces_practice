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
    cin>>n;
    vector<int> arr(n);
    int maxx =-1;
    for(int i =0;i<n;i++){
        cin>>arr[i];
        maxx = max(maxx ,arr[i]);
    }
    int maxsum =  INT_MIN;
    int sum = 0;
    int parity = abs(arr[0]) %2 == 0 ? 0 : 1;
    for(int i =0;i<n;i++){
        
        int currparity = abs(arr[i])%2 == 0 ?1 :0;
        if(sum < 0 || currparity == parity){
            sum =arr[i];
        }else{
            sum+=arr[i];
        }
        maxsum = max(maxsum,sum);
        parity = currparity;
    }
    cout<<maxsum<<endl;
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