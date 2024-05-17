#include <bits/stdc++.h>
#include <stack>
using namespace std;
int ar[20];
int jue=0;
stack<int> stk;

void re(int pos,int sum,int cnt){
    if(sum==100 && cnt==7){
        jue=1;
        return;
    }
    if(pos==10)
        return;
    re(pos+1,sum+ar[pos],cnt+1);
    if(jue==1){
        stk.push(ar[pos]);
        return;
    }
    re(pos+1,sum,cnt);
}
int main(){
    for(int i=1;i<=9;i++){
        scanf("%d",&ar[i]);
    }
    re(1,0,0);
    while(!stk.empty()){
        printf("%d\n",stk.top());
        stk.pop();
    }
    return 0;
}