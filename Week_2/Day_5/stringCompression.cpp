#include <bits/stdc++.h>
using namespace std;

int compress(vector<char>& chars) {
    if(chars.size()==1) return 1;
    string res="";
    int i,j,n=chars.size();
    char ch=chars[0];
    int c=1;
    for(i=1;i<n;i++){
        if(ch==chars[i]) c++;
        else{
            res+=ch;
            if(c!=1) res+=to_string(c);
            ch=chars[i];
            c=1;
        }
    }
    res+=ch;
    if(c!=1) res+=to_string(c);
    for(i=0;i<res.size();i++){
        chars[i]=res[i];
    }
    return res.size();
}

int main(){
    vector<char> v={'a','a','b','b','c','c','c'};
    cout << compress(v) << endl;
    for(auto x:v){
        cout << x << " ";
    }
    return 0;
}