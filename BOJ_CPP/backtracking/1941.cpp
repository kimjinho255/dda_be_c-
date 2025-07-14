#include <bits/stdc++.h>
using namespace std;
int dx[4]={1,0,-1,0};
int dy[4]={0,1,0,-1};
int res=0;
char board[5][5];
char b[25];
bool choose[25];

void func(int k,int n,int y){
  if(y>3)return;
  if(n==7){
    int startIdx = -1;
    for (int i = 0; i < 25; i++) {
      if (choose[i]) {
        startIdx = i;
        break;
      }
    }
    int visited[5][5]={0};
    int r=startIdx/5;
    int c=startIdx%5;
    int cnt=0;
   queue<pair<int,int> >q;
visited[r][c]=1;
q.push({r,c});
while (!q.empty()) {
  pair<int,int> p = q.front();
  q.pop();
  cnt++;
  for(int i=0;i<4;i++){
    int nr = p.first+dx[i];
    int nc = p.second+dy[i];
    if(nr<0||nr>=5||nc<0||nc>=5)continue;
    int idx = nr*5+nc;
    if(choose[idx]&&!visited[nr][nc]){
      visited[nr][nc]=1;
      q.push({nr,nc});
    }
  }
}
if(cnt==7)res++;
return;
  }
  if(k==25)return;
  if(25-k<7-n)return;
  choose[k]=true;
  if(b[k]=='Y'){
    func(k+1,n+1,y+1);
  }
  else {
    func(k+1,n+1,y);
  }
  choose[k]=false;
    func(k+1,n,y);

}
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  for(int i=0;i<5;i++){
    for(int j=0;j<5;j++){
      cin>>board[i][j];
      b[i*5+j]=board[i][j];
    }
  }
  func(0,0,0);
  cout<<res<<endl;
}