#include <bits/stdc++.h>
using namespace std;
int dx[4]={1,0,-1,0};
int dy[4]={0,1,0,-1};
int main(){
int cnt=0;
int cnt1=0;
  int n;
  cin>>n;
  char s[n][n];
  int visit[n][n];
  int visit1[n][n];
  for(int i=0;i<n;i++){
    cin>>s[i];
  }
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      visit[i][j]=0;
      visit1[i][j]=0;
    }
  }
  queue<pair<int,int>> q;
  queue<pair<int,int>> q1;
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
          if(visit[i][j]!=0)continue;
          q.push({i,j});
          visit[i][j]=1;
          while(!q.empty()){
            pair<int,int> p=q.front();
            q.pop();
            for(int k=0;k<4;k++){
              int nx=p.first+dx[k];
              int ny=p.second+dy[k];
              if(nx<0||nx>=n||ny<0||ny>=n)continue;
              if(visit[nx][ny]!=0)continue;
              if(s[nx][ny]==s[p.first][p.second]){
                q.push({nx,ny});
                visit[nx][ny]=1;
              }
            }
          }
      cnt++;
      }

    }
    for(int i=0;i<n;i++){
      for(int j=0;j<n;j++){
        if(visit1[i][j]!=0)continue;
        q1.push({i,j});
        visit1[i][j]=1;
        while(!q1.empty()){
          pair<int,int> p=q1.front();
          q1.pop();
          for(int k=0;k<4;k++){
            int nx=p.first+dx[k];
            int ny=p.second+dy[k];
            if(nx<0||nx>=n||ny<0||ny>=n)continue;
            if(visit1[nx][ny]!=0)continue;
            if((s[nx][ny]=='R'&&s[p.first][p.second]=='G')||(s[nx][ny]=='G'&&s[p.first][p.second]=='R')||s[nx][ny]==s[p.first][p.second]){
              q1.push({nx, ny});
              visit1[nx][ny]=1;
            }
          }

        }
        cnt1++;
      }
    }
    cout<<cnt<<" "<<cnt1<<"\n";
  }
