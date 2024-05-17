#include <bits/stdc++.h>
using namespace std;
bool ar[10];

int main(){
    ar[1]=1;
    char s[105];
    scanf("%s",s);
    for(int i=0;s[i] != '\0';i++){
        if(s[i]=='A'){
            int c=ar[1];
            ar[1]=ar[2];
            ar[2]=c;
        }

        if(s[i]=='B'){
            int c=ar[2];
            ar[2]=ar[3]; 
            ar[3]=c;
        }

        if(s[i]=='C'){
            int c=ar[1];
            ar[1]=ar[3];
            ar[3]=c;
        }
    }

    for(int i=1;i<=3;i++){
        if(ar[i]==1){
            printf("%d",i);
        }
    }
    return 0;
}