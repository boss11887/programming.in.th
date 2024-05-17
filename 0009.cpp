#include <bits/stdc++.h>
using namespace std;
vector<int> vec;
int main(){
    for(int i=1;i<=3;i++){
        int cur;
        scanf("%d",&cur);
        vec.push_back(cur);
    }
    sort(vec.begin(),vec.end());

    char s[5];
    scanf("%s",s);
    for(int i=0;i<=2;i++){
        if(s[i] == 'A'){
            printf("%d ",vec[0]);
        }else if(s[i] == 'B'){
            printf("%d ",vec[1]);
        }else if(s[i] == 'C'){
            printf("%d ",vec[2]);
        }
    }
    return 0;
}