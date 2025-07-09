#include <bits/stdc++.h>
using namespace std;
int main(){
  int dx[4]={1,0,-1,0};
  int dy[4]={0,1,0,-1};
  string board[102];
  int dis[102][102];
  int n,m;
  cin>>n>>m;
  for(int i=0;i<n;i++){
    cin>>board[i];
  }
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      dis[i][j]=-1;
    }
  }
  queue<pair<int,int> > q;
  dis[0][0]=0;
  q.push({0,0});
  while(!q.empty()){
    pair<int,int> cur=q.front();
    q.pop();
    for(int i=0;i<4;i++){
      int nx=cur.first+dx[i];
      int ny=cur.second+dy[i];
      if(nx<0||nx>=n||ny<0||ny>=m)continue;
      if(dis[nx][ny]>=0||board[nx][ny]!='1')continue;
      dis[nx][ny]=dis[cur.first][cur.second]+1;
      q.push({nx,ny});
    }
  }
  cout<<dis[n-1][m-1]+1<<endl;
}