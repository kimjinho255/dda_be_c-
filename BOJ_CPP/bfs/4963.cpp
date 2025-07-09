#include <bits/stdc++.h>
using namespace std;
int dx[8]={1,0,-1,0,1,1,-1,-1};
int dy[8]={0,1,0,-1,1,-1,1,-1};
int main(){
  int w,h;
  cin>>w>>h;
  while(!(w==0&&h==0)){
    int res=0;
    int board[51][51]={0};
    int vis[51][51];
    for(int i=0;i<h;i++){
      for(int j=0;j<w;j++){
        board[i][j]=0;
        vis[i][j]=0;
      }
    }


    for(int i=0;i<h;i++){
      for(int j=0;j<w;j++){
        cin>>board[i][j];
      }
    }
    for(int i=0;i<h;i++){
      for(int j=0;j<w;j++){
          if(board[i][j]==0||vis[i][j]==1) continue;
          queue<pair<int,int> > q;
            res++;
            vis[i][j]=1;
            q.push({i,j});
            while(!q.empty()){

              pair<int,int> p = q.front();
              q.pop();
              for(int v=0;v<8;v++){
                int nx=p.first+dx[v];
                int ny=p.second+dy[v];
                if(nx<0||nx>=h||ny<0||ny>=w)continue;
                if(board[nx][ny]==0||vis[nx][ny]==1)continue;
                vis[nx][ny]=1;
                q.push({nx,ny});

            }
          }
      }
    }
    cout<<res<<endl;
    cin>>w>>h;
  }
}