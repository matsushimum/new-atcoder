#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0;i<n;i++)
#define rrep(i,n) for (int i=1;i<=n;i++)
using ll=long long;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,t;
    cin >> n >> t;
    vector<ll> score(n);
    map<ll,int>mp;
    mp[0] = n;
    rep(i,t){
        int a,b;
        cin >> a >> b;
        --a;
        if(--mp[score[a]]==0)mp.erase(score[a]);
        score[a] += b;
        ++mp[score[a]];
        cout << mp.size() << endl;
    }
}