#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0;i<n;i++)
#define rrep(i,n) for (int i=1;i<=n;i++)
using ll=long long;
int main()
{
    int n;
    cin >> n;

    vector<int>x(n),y(n);
    rep(i,n){
        cin >> x[i] >> y[i];
    }

    rep(i,n){
        int max_dist = 0;
        int idx = -1;
        rep(j,n){
            int dist = pow((x[i]-x[j]),2)+pow((y[i]-y[j]),2);
            if(dist>max_dist){
                max_dist=dist;
                idx=j;
            }
        }

        cout << idx+1 << endl;
    }

    return 0;
}