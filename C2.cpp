#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0;i<n;i++)
#define rrep(i,n) for (int i=1;i<=n;i++)
using ll=long long;
int main()
{
    int n,a,b;
    cin >> n >> a >> b;
    int w=a+b;
    vector<int>d(n);
    rep(i,n){
        cin >> d[i];
        d[i]%=w;
    }

    sort(d.begin(),d.end());
    rep(i,n){
        d.push_back(d[i]+w);
    }

    rep(i,d.size()-1){
        if(d[i+1]-d[i]>=b+1){
            cout << "Yes" << endl;
            return 0;
        }
    }

    cout << "No" << endl;
    return 0;
    
}