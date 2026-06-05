#include <bits/stdc++.h>
using namespace std;

void reverseString(vector<char>& s) {
    int i,l=s.size();
    for(i=0;i<l/2;i++){
        char t=s[i];
        s[i]=s[l-i-1];
        s[l-i-1]=t;
    }
}

int main(){
    vector<char> s={'h','e','l','l','o'};
    reverseString(s);
    for(auto x:s){
        cout << x << " ";
    }
    return 0;
}