#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0;i<n;i++)
#define rrep(i,n) for (int i=1;i<=n;i++)
using ll=long long;

int main()
{
    int n;
    cin >> n;
    vector<vector<int>>v(n,vector<int>(n));
    rep(i,n){
        rep(j,n){
            cin >> v[i][j];
        }
    }

    rep(i,n){
        rep(j,n){
            if(v[i][j]==1){
                cout << j+1 << " ";
            }
        }
        cout << "\n";
    }

    return 0;
}