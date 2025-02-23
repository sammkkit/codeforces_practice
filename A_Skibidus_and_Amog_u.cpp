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
    int64_t n,k;cin>>n>>k;
    vector<int64_t> arr(n);
    int64_t sum =0;
    f(i,0,n){
        cin>>arr[i];
        sum+=arr[i];
    }
    sort(arr.begin(),arr.end());
    int start =0;
    int end = n-1;
    for(int i =0;i<k;i++){
        int64_t sum1 = arr[start]+arr[start+1];
        int64_t sum2 = arr[end];
        if(sum1 < sum2){
            start+=2;
            sum -= sum1;
        }else{
            end--;
            sum-=sum2;
        }
    }
    cout<<sum<<endl;
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