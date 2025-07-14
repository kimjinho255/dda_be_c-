#include <bits/stdc++.h>
using namespace std;
int dx[8]={1,1,-1,-1,2,2,-2,-2};
int dy[8]={2,-2,2,-2,1,-1,1,-1};
int ddx[4]={1,0,-1,0};
int ddy[4]={0,1,0,-1};
int board[201][201];
int dist[201][201][31];
int main(){
  int k;
  int w,h;
  cin>>k;
  cin>>w>>h;
  for(int i=0;i<h;i++){
    for(int j=0;j<w;j++){
      cin>>board[i][j];
      for(int z=0;z<=k;z++){
      dist[i][j][z]=-1;
      }
    }
  }
  queue<pair<int,pair<int,int>> > q;
  q.push({0,{0,0}});
  dist[0][0][0]=0;
  while(!q.empty()){
    pair<int,pair<int,int>> curr=q.front();
    q.pop();
    for(int i=0;i<8;i++){
      int nx=curr.first+dx[i];
      int ny=curr.second.first+dy[i];
      int horse=curr.second.second;
      if(nx<0||nx>=h||ny<0||ny>=w)continue;
      if(board[nx][ny]==1)continue;
      if(dist[nx][ny][horse+1]!=-1)continue;
      if(horse>=k)continue;
      dist[nx][ny][horse+1]=dist[curr.first][curr.second.first][horse]+1;
      q.push({nx,{ny,horse+1}});
    }
    for(int i=0;i<4;i++){
      int nnx=curr.first+ddx[i];
      int nny=curr.second.first+ddy[i];
      int horse=curr.second.second;
      if(nnx<0||nnx>=h||nny<0||nny>=w)continue;
      if(board[nnx][nny]==1)continue;
      if(dist[nnx][nny][horse]!=-1)continue;
      dist[nnx][nny][horse]=dist[curr.first][curr.second.first][horse]+1;
      q.push({nnx,{nny,horse}});
    }


  }
  int res=INT_MAX;

  for(int i=0;i<=k;i++){
    if(dist[h-1][w-1][i]==-1)continue;
    res=min(res,dist[h-1][w-1][i]);
  }
  if(res==INT_MAX){
    cout<<"-1\n";
    return 0;
  }
  cout<<res<<"\n";
}