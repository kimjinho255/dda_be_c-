#include <bits/stdc++.h>
using namespace std;
int dx[8]={1,1,-1,-1,2,2,-2,-2};
int dy[8]={2,-2,2,-2,1,-1,1,-1};
int main(){
  int t;
  cin>>t;
  while(t--){
  int l;
  cin>>l;
  int visit[l][l];
  for(int i=0;i<l;i++){
    for(int j=0;j<l;j++){
      visit[i][j]=-1;
    }
  }
  queue<pair<int,int> > q;
  int a,b,c,d;
  cin>>a>>b;
  cin>>c>>d;
  q.push({a,b});
  visit[a][b]=0;
  while(!q.empty()){
    pair<int,int> p=q.front();
    q.pop();
    for(int i=0;i<8;i++){
      int nx=p.first+dx[i];
      int ny=p.second+dy[i];
      if((nx<0)||(nx>=l)||(ny<0)||(ny>=l))continue;
      if(visit[nx][ny]!=-1)continue;
      visit[nx][ny]=visit[p.first][p.second]+1;
      q.push({nx,ny});
    }
  }
  cout<<visit[c][d]<<endl;
}
}