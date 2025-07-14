#include <bits/stdc++.h>
using namespace std;
int dx[4]={1,0,-1,0};
int dy[4]={0,1,0,-1};
int main(){
  int n,m;
  cin>>n>>m;
  int board[n][m];
  int dist[n][m];
  queue<pair<int,int> > q;
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      cin>>board[i][j];
      dist[i][j]=-1;
      if(board[i][j]==0){
        dist[i][j]=0;
      }
      if(board[i][j]==2){
        q.push({i,j});
        dist[i][j]=0;
      }
    }
  }
  while(!q.empty()){
      pair<int,int> cur=q.front();
      q.pop();
      for(int i=0;i<4;i++){
        int nx=cur.first+dx[i];
        int ny=cur.second+dy[i];
        if(nx<0||nx>=n||ny<0||ny>=m) continue;
        if(board[nx][ny]==0||dist[nx][ny]!=-1)continue;
        dist[nx][ny]=dist[cur.first][cur.second]+1;
        q.push({nx,ny});
      }
  }
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      cout<<dist[i][j]<<" ";
    }
    cout<<'\n';
  }
}