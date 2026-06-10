#include <bits/stdc++.h>
using namespace std;

int strStr(string haystack, string needle) {
    if(needle.size()>haystack.size()) return -1;
    int i,m=needle.size(),n=haystack.size();
    for(i=0;i<n-m+1;i++){
        string s=haystack.substr(i,m);
        if(needle==s) return i;
    }
    return -1;
}

int main(){
    cout << strStr("sadbutsad","sad") << endl;
    return 0;
}