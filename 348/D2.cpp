#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0;i<n;i++)
#define rrep(i,n) for (int i=1;i<=n;i++)
using ll=long long;
constexpr int inf = 1<<30;
constexpr array<pair<int,int>,4> dxy = {{{-1,0},{0,1},{1,0},{0,-1}}};

vector<vector<int>>bfs(const vector<string>&s,const int sx,const int sy){
    const int h = (int)s.size(),w=(int)s[0].size();
    vector<vector<int>>dist(h,vector<int>(w,inf));
    if(s[sx][sy]=='#'){
        return dist;
    }

    queue<pair<int,int>>que;
    dist[sx][sy]=0;
    que.push({sx,sy});
    while(not que.empty()){
        const auto [fx,fy] = que.front();
        que.pop();
        for(const auto &[ax,ay]:dxy){
            const int tx = fx+ax,ty=fy+ay;
            if(tx<0 or ty<0 or tx>=h or ty>=w or s[tx][ty] == '#'){
                continue;
            }

            if(dist[tx][ty] > dist[fx][fy]+1){
                dist[tx][ty] = dist[fx][fy]+1;
                que.push({tx,ty});
            }
        }
    }
}