#include <bits/stdc++.h>
using namespace std;

int firstUniqChar(string s) {
    unordered_map<char,int>mpp;
    int i,n=s.size();
    for(i=0;i<n;i++){
        mpp[s[i]]++;
    }
    for(i=0;i<n;i++){
        if(mpp[s[i]]==1)
            return i;
    }
    return -1;
}

int main(){
    cout << firstUniqChar("leetcode") << endl;
    return 0;
}