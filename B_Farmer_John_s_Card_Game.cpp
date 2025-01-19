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
    int n,m;
    cin>>n>>m;
    vector<vector<int>> arr(n, vector<int>(m));
    vector<pair<int,int>> first_element(n); // pair,first - intege, pair.seocnd - cow no
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j]; 
        }
        sort(arr[i].begin(),arr[i].end());
        first_element[i] = {arr[i][0],i+1};
    }
    for(int i =0;i<n;i++){
        for(int j=0;j<m-1;j++){
            if(arr[i][j+1]-arr[i][j] != n){
                cout<<-1<<endl;
                return;
            }
        }
    }
    sort(first_element.begin(),first_element.end());
    for(const auto&pair:first_element){
        cout<<pair.second<<" ";
    }
    cout<<endl;
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