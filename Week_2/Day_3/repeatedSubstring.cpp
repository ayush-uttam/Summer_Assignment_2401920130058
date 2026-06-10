#include <bits/stdc++.h>
using namespace std;

bool repeatedSubstringPattern(string s) {
    int i,j,n=s.size();
    for(i=0;i<n/2;i++){
        string t=s.substr(0,i+1);
        string r="";
        if(n%t.length()==0){
            for(j=1;j<=n/t.length();j++){
                r=r+t;
            }
            if(r==s) return true;
        }
    }
    return false;
}

int main(){
    cout << repeatedSubstringPattern("abab") << endl;
    return 0;
}