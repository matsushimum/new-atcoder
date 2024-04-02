#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0;i<n;i++)
#define rrep(i,n) for (int i=1;i<=n;i++)
using ll=long long;
const int M = 60;

ll tos(vector<int>x){
    ll res = 0;
    rep(i,M)res|=(ll)x[i]<<i;
    return res;
}

int popcount(ll x){
    return __builtin_popcountll(x);
}

int main()
{
    ll a,b,c;
    cin >> a >> b >> c;
    ll one = popcount(c);//1が何個あるか
    ll zero = M-one;

    ll d= a+b-one;
    if(d<0||d%2==1){
        cout << -1 << endl;
        return 0;
    }

    d/=2;
    a -= d;
    b -= d;
    if(d>zero||a<0||b<0){
        cout << -1 << endl;
        return 0;
    }
    vector<int>x(M),y(M);
    vector<int>i0,i1;
    rep(i,60){
        if(c>>i&1)i1.push_back(i);
        else i0.push_back(i);
    }
    rep(j,d){
        int i=i0[j];
        x[i] = y[i] =1;
    }
    rep(j,one){
        int i=i1[j];
        if(j<a)x[i]=1;
        else y[i]=1;
    }

    cout << tos(x) << ' ' << tos(y) << endl;
    return 0;

}