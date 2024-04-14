#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0;i<n;i++)
#define rrep(i,n) for (int i=1;i<=n;i++)
using ll=long long;

double calc(int x1,int y1,int x2,int y2){
    return sqrt(pow((x1-x2),2)+pow((y1-y2),2));
}


int main()
{
    int n;
    cin >> n;
    vector<pair<int,int>>v;
    double temp;

    rep(i,n){
        int x,y;
        cin >> x >> y;
        v[i].first=x;
        v[i].second=y;
        cout << "test" << endl;
    }



    rep(i,n){
        rep(j,n){
            if(i==j)continue;
            temp = max(calc(v[i].first,v[i].second,v[j].first,v[j].second),temp);
        }
        cout << temp << endl;
    }

    return 0;
}