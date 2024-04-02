#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0;i<n;i++)
#define rrep(i,n) for (int i=1;i<=n;i++)
using ll=long long;
int main()
{
    string s;
    cin >> s;
    set<string>st;
    for(int i=0;i<s.size();i++){//0からs.size-1までの最初
        for(int j=1;i+j<=s.size();j++){//1から(iという初期値+j(同じところから始まらないためj=1としておく))
            st.insert(s.substr(i,j));
        }
    }
    cout << st.size() << endl;
}