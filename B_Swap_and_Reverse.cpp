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
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    string odd,even;
    for(int i =0;i<n;i+=2){
        even+=s[i];
    }
    for(int i =1;i<n;i+=2){
        odd+=s[i];
    }
    sort(even.begin(),even.end());
    sort(odd.begin(),odd.end());
    string merged;
    int j=0,l=0;
    for(int i =0;i<n;i++){
        if(i%2 ==0){
            merged+=even[j];
            j++;
        }else{
            merged+=odd[l];
            l++;
        }
    }
    bool changed = true;
    while (changed) { 
        changed = false;
        for (int i = 0; i <= n - k; i++) {
            if (merged[i] > merged[i + k - 1]) {
                reverse(merged.begin() + i, merged.begin() + i + k);
                changed = true; 
            }
        }
    }
    cout<<merged<<endl;
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