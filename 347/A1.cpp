#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0;i<n;i++)
#define rrep(i,n) for (int i=1;i<=n;i++)
using ll=long long;
int main()
{
    int n,k;
    cin >> n >> k;
    int a[110];
    rep(i,n)cin>>a[i];

    rep(i,n){
        if(a[i]%k==0){
            int ans = a[i]/k;
            cout << ans << " ";
        }
    }

    return 0;
}