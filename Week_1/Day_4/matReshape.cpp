#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
    int i,j,m=mat.size(),n=mat[0].size(),co=0;
    if(m*n!=r*c)    return mat;
    vector<int> t(r*c);
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            t[co++]=mat[i][j];
        }
    }
    co=0;
    vector<vector<int>> res;
    for(i=0;i<r;i++){
        vector<int> t1;
        for(j=0;j<c;j++){
            t1.emplace_back(t[co++]);
        }
        res.emplace_back(t1);
    }
    return res;
}

int main(){
    vector<vector<int>> v = {{1,2},{3,4}};
    vector<vector<int>> res = matrixReshape(v,1,4);
    for(auto x:res){
        for(auto y:x){
            cout << y << " ";
        }
        cout << endl;
    }
    return 0;
}