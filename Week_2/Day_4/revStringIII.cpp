#include <bits/stdc++.h>
using namespace std;

string reverseWords(string s) {
    vector<string>v;
    int i,j,n=s.size();
    string t="",res="";
    for(i=0;i<n;i++){;
        if(s[i]==' '&&t.size()!=0){
            v.emplace_back(t);
            t="";
        }
        else if(s[i]!=' '){
            t+=s[i];
        }
    }
    if(t.size()!=0)
        v.emplace_back(t);
    for(i=0;i<v.size();i++){
        for(j=0;j<v[i].size()/2;j++){
            swap(v[i][j],v[i][v[i].size()-1-j]);
        }
    }
    for(i=0;i<v.size();i++){
        res+=v[i];
        if(i!=v.size()-1)
            res+=" ";
    }
    return res;
}

int main(){
    cout << reverseWords("Let's take LeetCode contest") << endl;
    return 0;
}