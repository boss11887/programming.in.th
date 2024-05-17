#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int high=-2e9;
    int low = 2e9;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int cur;
        scanf("%d",&cur);
        high = max(high,cur);
        low = min(low,cur);
    }
    printf("%d\n%d",low,high);
    return 0;
}