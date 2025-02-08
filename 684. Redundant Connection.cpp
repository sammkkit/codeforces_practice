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

class Solution {
public:
    pair<bool,pair<int,int>> dfs(int node , int parent,vector<vector<int>>& adj,vector<int> &vis){
        vis[node] = 1;
        for(auto i : adj[node]){
            if(!vis[i]){
                if(dfs(i,node,adj,vis) == true){
                    return {true,{i,node}};
                }
            }
            if(i!=parent){
                return {true,{i,node}};
            }
        }
        return {false,{-1,-1}};
    }
    vector<int> findRedundantConnection(vector<vector<int>>& edges) {
        int n = edges.size();
        vector<vector<int>> adj(n+1);
        for(auto &edge:edges){
            adj[edge[0]].push_back(edge[1]);
            adj[edge[1]].push_back(edge[0]);
        }
        vector<int> vis(n+1,0);
        auto ans = dfs(1,-1,adj,vis);
        return {ans.second.first,ans.second.second};
    }
};

int main() {
    fastio();
    int t;
    t = 1;
    cin >> t;
    while (t--) {
        // solve();
    }
    return 0;
}