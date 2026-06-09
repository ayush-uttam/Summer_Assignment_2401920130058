#include <bits/stdc++.h>
using namespace std;

bool checkInclusion(string s1, string s2) {
    int i,m=s1.size(),n=s2.size();
    if(m>n) return false;
    vector<int> mpp1(26,0);
    for(auto x:s1){
        mpp1[x-'a']++;
    }
    for(i=0;i<n-m+1;i++){
        string s=s2.substr(i,m);
        vector<int> mpp2(26,0);
        for(auto x:s){
            mpp2[x-'a']++;
        }
        if(mpp1==mpp2) return true;
    }
    return false;
}

int main(){
    cout << checkInclusion("ab","eidbaooo") << endl;
    return 0;
}