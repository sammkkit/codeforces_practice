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
    bool isincreasing = true;
    for(int i =0;i<n;i++){
        cin>>arr[i];
        if(i!=0){
            if(arr[i-1]>arr[i]){
                isincreasing = false;
            }
        }
    }
    // increasing banana hai  ( a[i+1] >= a[i])
    if(isincreasing){
        YES;
        return;
    }
    for(int i=0;i<n-1;i++){
        int to_diff = min(arr[i],arr[i+1]);
        arr[i] -= to_diff;
        arr[i+1] -= to_diff;
    }
    for(int i =0;i<n-1;i++){
        if(arr[i] > arr[i+1]){
            NO;
            return;
        }
    }
    YES;
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