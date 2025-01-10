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
    int64_t q;
    cin>>q;
    vector<int64_t> arr(q);
    f(i,0,q)cin>>arr[i];
    string s="";
    vector<int64_t> ans;
    bool flag = true;
    for(int i =0;i<q;i++){
        if(ans.empty()){
            ans.push_back(arr[i]);
            s+='1';
        }else{
            if(ans[ans.size()-1]<=arr[i]){
                if(flag){
                    ans.push_back(arr[i]);
                    s+='1';
                }else{
                    if(arr[i]>ans[0]){
                        s+='0';
                    }else{
                        ans.push_back(arr[i]);
                        s+='1';
                    }
                }
            }else if(arr[i]<=ans[0] && flag){
                flag = false;
                ans.push_back(arr[i]);
                s+='1';
            }else{
                s+='0';
            }
        }
    }
    cout<<s<<endl;
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