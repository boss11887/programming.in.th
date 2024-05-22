#include <bits/stdc++.h>
char ar[250][250];
int block[250];
int n,m;

int main(){
    scanf("%d %d",&n,&m);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            scanf(" %c",&ar[i][j]);
        }
    }
    for(int j=1;j<=m;j++){
        ar[n+1][j]='O';
        int cur;
        scanf("%d",&cur);
        while(cur > 0){
            for(int i=1;i<=n+1;i++){
                if(ar[i][j] == 'O' || ar[i][j] == '#'){
                    ar[i-1][j]='#';
                    break;
                }
            }
            cur--;
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            printf("%c ",ar[i][j]);
        }
        printf("\n");
    }
    return 0;
}