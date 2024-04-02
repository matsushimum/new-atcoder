#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0;i<n;i++)
#define rrep(i,n) for (int i=1;i<=n;i++)
using ll=long long;
int main()
{
    int n;
    cin >> n;
    int a[110];
    rep(i,n){
        cin >> a[i];
    }

    for(int i=0;i<n-1;i++){
        cout << a[i]*a[i+1];
    }

    return 0;
}