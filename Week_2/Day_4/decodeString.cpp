#include <bits/stdc++.h>
using namespace std;

string decodeString(string s) {
    stack<int> s1;
    stack<string> s2;
    string res="";
    int n=0;
    for(char c:s){
        if(isdigit(c)){
            n=n*10+(c-'0');
        }
        else if(c=='['){
            s1.push(n);
            s2.push(res);
            n=0;
            res="";
        }
        else if(c==']'){
            int k=s1.top();
            s1.pop();
            string p=s2.top();
            s2.pop();
            string t="";
            while(k--) t+=res;
            res=p+t;
        }
        else{
            res+=c;
        }
    }
    return res;
}

int main(){
    cout << decodeString("3[a]2[bc]") << endl;
    return 0;
}