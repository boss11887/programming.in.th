#include <bits/stdc++.h>

int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    int sum=a+b+c;
    // printf("%d",sum);
    if(sum >= 80){
        printf("A");
    }else if(sum >= 75){
        printf("B+");
    }else if(sum >= 70){
        printf("B");
    }else if(sum >= 65){
        printf("C+");
    }else if(sum >= 60){
        printf("C");
    }else if(sum >= 55){
        printf("D+");
    }else if(sum >= 50){
        printf("D");
    }else if(sum >= 0){
        printf("F");
    }
    return 0;
}