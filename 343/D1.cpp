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
    vector<ll>vvv;
    rep(i,t){
        ll a,b;
        cin >> a >> b;
        v[a-1]+=b;
        unordered_set<ll>vv(v.begin(),v.end());
        vvv.push_back(vv.size());
    }

    rep(i,vvv.size()){
        cout << vvv[i] << endl;
    }
}