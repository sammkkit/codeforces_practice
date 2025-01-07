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
    bool same = true;
    for(int i =0;i<n;i++){
        cin>>arr[i];
        if(i != 0 && arr[i] != arr[i-1])
            same = false;
    }
    if(same){
        cout<<0<<endl;return;
    }
    int start = 1;
    int end = n-2;
    int s = start;
    int e = end;
    while(start < n && arr[start] == arr[start-1]){
        start++;
    }
    while(end >=0 && arr[end] == arr[end+1]){
        end--;
    }
    if(arr[s-1] == arr[e+1]){
        // cout<<"first"<<endl;
        cout<<end-start+1<<endl;
        return;
    }
    if(start > ((n-1)- end)){
        // cout<<"second"<<endl;
        cout<<(n-1)-start+1<<endl;
        return;
    }else{
        // cout<<"third"<<endl;
        cout<<end+1<<endl;
        return;
    }
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