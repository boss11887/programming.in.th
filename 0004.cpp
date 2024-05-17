#include <bits/stdc++.h>
char s[10005];

int main(){
    scanf("%s",s);
    int big=0,small=0;
    for(int i=0;s[i] != '\0';i++){
        if(s[i] >= 'a' && s[i]<= 'z')
            small=1;
        else if(s[i] >= 'A' && s[i]<= 'Z')
            big=1;
    }    
    if(small && big){
        printf("Mix");
    }else if(small){
        printf("All Small Letter");
    }else if(big){
        printf("All Capital Letter");
    }
    return 0;
}