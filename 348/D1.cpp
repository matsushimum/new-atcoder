#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0;i<n;i++)
#define rrep(i,n) for (int i=1;i<=n;i++)
using ll=long long;
int main()
{
    int h,w;
    cin >> h >> w;
    vector<vector<char>>v(h,vector<char>(w));

    rep(i,h){
        rep(j,w){
            cin >> v[i][j];
        }
    }

    int n;
    cin >> n;
    vector<tuple<int,int,int>>t;
    rep(i,n){
        int r,c,e;
        cin >> r >> c >> e;
        t.emplace_back(r,c,e);
    }

    
}