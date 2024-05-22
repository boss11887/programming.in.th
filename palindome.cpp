#include <bits/stdc++.h>
#include <string>
using namespace std;

int isPalindrome(int n) {
    string str = to_string(n);
    return equal(str.begin(),str.begin()+str.length()/2 ,str.rbegin());
}