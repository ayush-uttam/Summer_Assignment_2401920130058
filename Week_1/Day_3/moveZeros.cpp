#include <bits/stdc++.h>
using namespace std;

void moveZeroes(vector<int>& nums) {
    int i,ind=-1,n=nums.size();
    for(i=0;i<n;i++){
        if(nums[i]==0){
            ind=i;
            break;
        }
    }
    if(ind==-1) return;
    for(i=ind;i<n;i++){
        if(nums[i]!=0){
            swap(nums[ind++],nums[i]);
        }
    }
}

int main(){
    vector<int> v={0,1,0,3,12};
    moveZeroes(v);
    for(auto x:v){
        cout << x << " " ; 
    }
    return 0;
}