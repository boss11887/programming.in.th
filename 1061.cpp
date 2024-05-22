#include <bits/stdc++.h>
#include <queue>
using namespace std;
queue<pair<int,int > > q;
int ar[25][25];
int visited[25][25];
int plusr[4] = {1,0,-1,0};
int plusc[4] = {0,1,0,-1};

int main(){
    int n,high;
    int st,ed;
    scanf("%d %d %d",&n,&st,&ed);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            scanf("%d",&ar[i][j]);
            if(i==ed && j==st)
                high=ar[i][j];  
        }
    }
    q.push({ed,st});
    while(!q.empty()){
        int nowr = q.front().first;
        int nowc = q.front().second;
        q.pop();
        // printf("===%d %d -> %d\n",nowr,nowc,high);
        for(int i=0;i<=3;i++){
            int nextr=nowr+plusr[i];
            int nextc=nowc+plusc[i];
            if(nextr == 0 || nextr > n || nextc ==0 || nextc > n){
                continue;
            }
            if(visited[nextr][nextc]==1){
                continue;
            }
            if(ar[nextr][nextc] == 100){
                continue;
            }
            if(ar[nextr][nextc] <= ar[nowr][nowc]){
                continue;
            }
            visited[nextr][nextc]=1;
            high=max(high,ar[nextr][nextc]);
            q.push({nextr ,nextc});
        }
    }
    printf("%d",high);
    return 0;
}