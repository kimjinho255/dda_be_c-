#include <bits/stdc++.h>
using namespace std;

int board[1002][1002];
int dis[1002][1002];
int main(){
  int dx[4]={1,0,-1,0};
  int dy[4]={0,1,0,-1};
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int n,m;
  cin>>m>>n;
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      dis[i][j]=0;
    }
  }
  queue<pair<int,int> > q;
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      cin>>board[i][j];
      if(board[i][j]==1){
        q.push({i,j});
        dis[i][j]=0;
      }
      if(board[i][j]==0){
        dis[i][j]=-1;
      }
    }
  }
  while(!q.empty()){
    pair<int,int> cur=q.front();
    q.pop();
    for(int i=0;i<4;i++){
      int nx=cur.first+dx[i];
      int ny=cur.second+dy[i];
      if(nx<0||nx>=n||ny<0||ny>=m)continue;
      if(dis[nx][ny]!=-1)continue;
      dis[nx][ny]=dis[cur.first][cur.second]+1;
      q.push({nx,ny});
    }
  }
  int res=0;
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      if(dis[i][j]==-1){
        cout<<"-1"<<endl;
        return 0;
      }
      res=max(res,dis[i][j]);
    }
  }
  cout<<res<<endl;
}