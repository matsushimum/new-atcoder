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
    for(int i=0;i<s.size();i++){
        for(int j=1;i+j<=s.size();j++){
            st.insert(s.substr(i,j));
        }
    }

    cout << st.size() << endl;
    return 0;
}