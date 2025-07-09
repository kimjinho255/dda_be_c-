#include <bits/stdc++.h>
using namespace std;
int disf[1002][1002];
int jdis[1002][1002];
int r,c;
int dx[4]={1,0,-1,0};
int dy[4]={0,1,0,-1};
int main(){
  cin>>r>>c;
  string board[1002];
  queue<pair<int,int> > q;
  queue<pair<int,int> > q2;
  for(int i=0;i<r;i++){
    cin>>board[i];
  }
  for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
      disf[i][j]=-1;
      jdis[i][j]=-1;
      if(board[i][j]=='F'){
        disf[i][j]=0;
        q.push({i,j});
      }
      if(board[i][j]=='J'){
        jdis[i][j]=0;
        q2.push({i,j});
      }
    }
  }
  while(!q.empty()){
    pair<int,int> cur = q.front();
    q.pop();
    for(int i=0;i<4;i++){
      int nx=cur.first+dx[i];
      int ny=cur.second+dy[i];
      if(nx<0 || nx>=r || ny<0 || ny>=c)continue;
      if(board[nx][ny]=='#'||disf[nx][ny]!=-1)continue;
      disf[nx][ny]=disf[cur.first][cur.second]+1;
      q.push({nx,ny});
    }
  }
 while(!q2.empty()){
   pair<int,int> cur2 = q2.front();
   q2.pop();
   for(int i=0;i<4;i++){
     int nx=cur2.first+dx[i];
     int ny=cur2.second+dy[i];
     if(nx<0 || nx>=r || ny<0 || ny>=c){
       cout<<jdis[cur2.first][cur2.second]+1;
       return 0;
     }
     if(board[nx][ny]=='#')continue;
     if (jdis[nx][ny] != -1) continue;
     if(disf[nx][ny]!=-1&&disf[nx][ny]<=jdis[cur2.first][cur2.second]+1)continue;
     jdis[nx][ny]=jdis[cur2.first][cur2.second]+1;
     q2.push({nx,ny});
   }
 }
cout<<"IMPOSSIBLE"<<endl;
}