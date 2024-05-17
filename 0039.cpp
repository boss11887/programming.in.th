#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;
unordered_map<int,int> um;
int n,m;
int ar[15];
int visit[15];

void re(int pos){
    if(pos == n+1){
        for(int i=1;i<=n;i++){
            printf("%d ",ar[i]);
        }
        printf("\n");
        return ;
    }
    for(int i=1;i<=n;i++){
        if(pos==1 && um[i]==1){
            // printf("==%d %d\n",pos,i);
            continue;
        }
        if(visit[i] == 1){
            continue;
        }
        ar[pos]=i;
        visit[i]=1;
        // printf("==%d %d\n",pos,i);
        re(pos+1);
        visit[i]=0;
    }
}

int main(){
    scanf("%d %d",&n,&m);
    for(int i=1;i<=m;i++){
        int cur;
        scanf("%d",&cur);
        um[cur]=1;
    }
    re(1);

    return 0;
}