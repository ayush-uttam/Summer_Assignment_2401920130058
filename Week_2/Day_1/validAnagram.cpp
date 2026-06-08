#include <bits/stdc++.h>
using namespace std;

bool isAnagram(string s, string t) {
    if(s.size()!=t.size()) return false;
    int i,m=s.size(),n=t.size();
    unordered_map<char,int>mpp;
    for(i=0;i<m;i++){
        mpp[s[i]]++;
    }
    for(i=0;i<n;i++){
        mpp[t[i]]--;
    }
    for(auto x:mpp){
        if(x.second!=0) return false;
    }
    return true;
}

int main(){
    cout << isAnagram("anagram","nagaram") << endl;
    return 0;
}