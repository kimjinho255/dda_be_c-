#include <bits/stdc++.h>
using namespace std;
int main(){
  int n,k;
  cin>>n>>k;
  int dis[100002];
  for(int i=0;i<100001;i++){
    dis[i]=-1;
  }
  dis[n]=0;
  queue<int> q;
  q.push(n);
  while(dis[k]==-1){
    int cur = q.front();
    q.pop();
    for(int next:{cur-1,cur+1,cur*2}){
      if(next<0||next>100000)continue;
      if(dis[next]!=-1)continue;
      dis[next]=dis[cur]+1;
      q.push(next);
    }
}
cout<<dis[k]<<endl;
}