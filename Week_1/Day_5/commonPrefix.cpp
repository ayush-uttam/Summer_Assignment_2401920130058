#include <bits/stdc++.h>
using namespace std;

string longestCommonPrefix(vector<string>& strs) {
    int i,j,l=strs.size();
    int sl,mi=INT_MAX;
    string res="";
    for(i=0;i<l;i++){
        sl=strs[i].size();
        mi=min(sl,mi);
    }
    string t=strs[0];
    for(i=0;i<mi;i++){
        bool b=true;
        for(j=1;j<l;j++){
            string t1=strs[j];
            if(t[i]!=t1[i]){
                b=false;
                break;
            }
        }
        if(b)
            res+=t[i];
        else
            break;
    }
    return res;
}

int main(){
    // vector<string> s={"flower","flow","flight"};
    vector<string> s = {"aaaa","aaa","aaa"};
    cout << longestCommonPrefix(s) << endl;
    return 0;
}