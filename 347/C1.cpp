#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0;i<n;i++)
#define rrep(i,n) for (int i=1;i<=n;i++)
using ll=long long;

//この問題は円形をイメージするように

int main()
{
    int n,a,b;
    cin >> n >> a >> b;
    int w=a+b;
    vector<int> d(n);
    rep(i,n){
        cin >> d[i];
        d[i]%=w;
    }

    sort(d.begin(),d.end());//ソート
    rep(i,n)d.push_back(d[i]+w);//2週分になっている、端を見落とさないため

    rep(i,d.size()-1){//隣り合った要素を比較するために全体サイズ-1
        if(d[i+1]-d[i]>=b+1){//イベント同士の空きの間に平日+1の余裕があるか(休日にイベントがあるかの逆をやっている)
        //平日+1の理由は平日+!にしてしまうと平日にイベントがあることになってしまうため
            cout << "Yes" << endl;
            return 0;
        }
    }

    cout << "No" << endl;
    return 0;
}