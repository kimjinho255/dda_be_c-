#include <bits/stdc++.h>
using namespace std;
int dx[4]={1,0,-1,0};
int dy[4]={0,1,0,-1};
int main(){
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  int n,m;
  cin>>n>>m;
  int grim[n][m];
  int vis[n][m];
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      cin>>grim[i][j];
      vis[i][j]=0;
    }
  }

  int mx=0;
  int num=0;
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      if(grim[i][j]==0||vis[i][j]==1)continue;
       num++;
       queue<pair<int,int> > q;
  	   vis[i][j]=1;
       q.push({i,j});
       int s=0;
         while(!q.empty()){

    	pair<int,int> cur=q.front();
    	q.pop();
        s++;
    	for(int k=0;k<4;k++){
      		int nx=cur.first+dx[k];
      		int ny=cur.second+dy[k];
      		if(nx<0||nx>=n||ny<0||ny>=m) continue;
     		 if(vis[nx][ny]||grim[nx][ny]!=1)continue;
      		vis[nx][ny]=1;
      		q.push({nx,ny});
    }
  }
	mx=max(mx,s);
    }
  }
  cout<<num<<endl;
  cout<<mx<<endl;

}