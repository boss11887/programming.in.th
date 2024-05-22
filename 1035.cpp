#include <bits/stdc++.h>
#include <string>
using namespace std;

int isPalindrome(int n) {
    string str = to_string(n);
    return equal(str.begin(),str.begin()+str.length()/2 ,str.rbegin());
}

int isPrime(int n){
    for(int i=2;i<=sqrt(n);i++){
        if(n%i ==0)
            return 0;
    }
    return 1;
}

int main(){
    int n;
    scanf("%d",&n);
    while(1){
        if(isPrime(n) && isPalindrome(n)){
            printf("%d",n);
            break;
        }
        n++;
    }
    return 0;
}