#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0;i<n;i++)
#define rrep(i,n) for (int i=1;i<=n;i++)
using ll=long long;
int main()
{
    ll n,t;
    cin >> n >> t;
    vector<ll>v(n,0);
    rep(i,t){
        ll a,b;
        cin >> a >> b;
        v[a]+=b;
        
    }
}