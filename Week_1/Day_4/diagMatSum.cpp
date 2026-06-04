#include <bits/stdc++.h>
using namespace std;

int diagonalSum(vector<vector<int>>& mat) {
    int sum=0,i,n=mat.size();
    for(i=0;i<n;i++){
        sum+=mat[i][i];
        sum+=mat[i][n-i-1];
    }
    if(n%2!=0) sum-=mat[n/2][n/2];
    return sum;
}

int main(){
    vector<vector<int>> v ={{1,2,3},{4,5,6},{7,8,9}};
    cout << diagonalSum(v) << endl;
    return 0;
}