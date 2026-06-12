#include <bits/stdc++.h>
using namespace std;

vector<vector<string>> groupAnagrams(vector<string>& strs) {
    unordered_map<string,vector<string>>mpp;
    vector<vector<string>> res;
    for(auto x:strs){
        string t=x;
        sort(t.begin(),t.end());
        mpp[t].push_back(x);
    }
    for(auto x:mpp){
        res.push_back(x.second);
    }
    return res;
}

int main(){
    vector<string> v = {"eat","tea","tan","ate","nat","bat"};
    vector<vector<string>> res=groupAnagrams(v);
    for(auto x:res){
        for(auto y:x){
            cout << y << " ";
        }
        cout << endl;
    }
    return 0;
}