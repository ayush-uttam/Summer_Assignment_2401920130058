#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string s) {
    string str="";
    int i,l=s.size();
    for(i=0;i<l;i++){
        if(s[i]>='a'&&s[i]<='z'||s[i]>='0'&&s[i]<='9')
            str+=s[i];
        else if(s[i]>='A'&&s[i]<='Z')
            str+=(char)(s[i]+32);
    }
    l=str.size();
    for(i=0;i<l;i++){
        if(str[i]!=str[l-i-1])
            return false;
    }
    return true;
}

int main(){
    string s="A man, a plan, a canal: Panama";
    cout << isPalindrome(s) << endl;
    return 0;
}