#include <bits/stdc++.h>
long long ar[105][105];

int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            scanf("%lld",&ar[i][j]);
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            long long cur;
            scanf("%lld",&cur);
            ar[i][j]+=cur;
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            printf("%lld ",ar[i][j]);
        }
        printf("\n");
    }
    return 0;
}