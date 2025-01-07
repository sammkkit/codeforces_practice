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
    int n,m,k;
    cin>>n>>m>>k;
    vector<int> a(n);
    vector<int> b(m);
    map<int, char> st;
    set<int> setA, setB;
    int cm = 0;
    for(int i =0;i<n;i++){
        cin>>a[i];
        if (a[i] >= 1 && a[i] <= k) {
            setA.insert(a[i]);
        }
    }
    for(int i =0;i<m;i++){
        cin>>b[i];
        if(b[i] >= 1 && b[i] <= k){
           setB.insert(b[i]);
        }
    }
    for (auto& elem : setA) {
        if (setB.find(elem) != setB.end()) {
            cm++;
        }
    }
    int countA = setA.size()-cm;
    int countB = setB.size()-cm;  
    if (countA + countB +cm < k) {
        cout << "NO\n";
        return;
    }
    if(countA >(k/2) || countB >(k/2)){
        cout<<"NO"<<"\n";
        return;
    }else{
        cout<<"YES"<<"\n";
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