#include <bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
  int m,n,k;
  cin>>m>>n>>k;
  int board[51][51];
  int vis[51][51];
  int dx[4] = {1,0,-1,0};
  int dy[4] = {0,1,0,-1};
  queue<pair<int,int>> q;
    for(int i=0;i<m;i++){
      for(int j=0;j<n;j++){
        board[i][j]=0;
        vis[i][j]=0;
      }
    }
  for(int i=0;i<k;i++){
    int x,y;
    cin>>x>>y;
    board[x][y]=1;
  }
  int count=0;

  for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
      if(board[i][j]!=1||vis[i][j]!=0) continue;
      q.push({i,j});
      vis[i][j]=1;
      while(!q.empty()){
        pair<int,int> cur = q.front();
        q.pop();
        for(int u=0;u<4;u++){
          int nx = cur.first+dx[u];
          int ny = cur.second+dy[u];
          if(nx<0||nx>=m||ny<0||ny>=n)continue;
          if(board[nx][ny]!=1||vis[nx][ny]!=0) continue;
          vis[nx][ny]=1;
          q.push({nx,ny});
        }
      }
      count++;
    }
  }
cout<<count<<endl;
}
}