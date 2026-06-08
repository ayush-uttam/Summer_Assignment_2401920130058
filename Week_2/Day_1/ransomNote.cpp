#include <bits/stdc++.h>
using namespace std;

bool canConstruct(string ransomNote, string magazine) {
    unordered_map<char,int>mpp1;
    unordered_map<char,int>mpp2;
    int i,m=ransomNote.size(),n=magazine.size();
    for(i=0;i<m;i++){
        mpp1[ransomNote[i]]++;
    }
    for(i=0;i<n;i++){
        mpp2[magazine[i]]++;
    }
    for(auto x:mpp1){
        if(mpp2[x.first]<x.second)
            return false;
    }
    return true;
}

int main(){
    cout << canConstruct("a","b") << endl;
    return 0;
}