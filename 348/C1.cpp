#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0;i<n;i++)
#define rrep(i,n) for (int i=1;i<=n;i++)
using ll=long long;
int main()
{
    int n;
    cin >> n;

  map<int, int> minimum_taste; // 各色のおいしさの最小値
  for (int i = 0; i < n; ++i) {
    int a, c;
    cin >> a >> c;
    if (minimum_taste.contains(c)) {
      // すでに色cが存在している場合は最小値を更新
      minimum_taste[c] = min(minimum_taste[c], a);
    } else {
      // 新しく追加される色
      minimum_taste[c] = a;
    }
  }

    int ans = -1;

    for(auto[c,val]:minimum_taste){
        ans = max(ans,val);
    }

    cout << ans << endl;
}