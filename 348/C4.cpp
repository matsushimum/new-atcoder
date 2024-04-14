#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0;i<n;i++)
#define rrep(i,n) for (int i=1;i<=n;i++)
using ll=long long;
int main()
{
    ll n;
    cin >> n;
    map<ll,ll>d;
    rep(i,n){
        ll a,c;
        cin >> a >> c;
        if(d.count(c)==0)d[c]=a;
        else d[c] = min(d[c],a);
    }

    ll ans = 0;
    for(auto[a,c]:d)ans=max(ans,a);
    cout << ans << endl;
    return 0;
}