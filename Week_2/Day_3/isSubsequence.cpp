#include <bits/stdc++.h>
using namespace std;

bool isSubsequence(string s, string t) {
    if(s.size()>t.size()) return false;
    if(s==t) return true;
    int i=0,j=0,m=s.size(),n=t.size();
    while(j<n&&i<m){
        if(s[i]==t[j])
            i++;
        j++;
    }
    if(i==m) return true;
    else return false;
}

int main(){
    cout << isSubsequence("axc","ahbgdc") << endl;
    return 0;
}