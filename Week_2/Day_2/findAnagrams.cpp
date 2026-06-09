#include <bits/stdc++.h>
using namespace std;

vector<int> findAnagrams(string s, string p) {
    vector<int>res;
    int i,m=s.size(),n=p.size();
    if(n>m) return res;
    vector<int> mpp1(26,0);
    for(auto x:p){
        mpp1[x-'a']++;
    }
    for(i=0;i<m-n+1;i++){
        string s1=s.substr(i,n);
        vector<int> mpp2(26,0);
        for(auto x:s1){
            mpp2[x-'a']++;
        }
        if(mpp1==mpp2) res.push_back(i);
    }      
    return res;
}

int main(){
    vector<int> v=findAnagrams("cbaebabacd","abc");
    for(auto x:v){
        cout << x << " ";
    }
    return 0;
}