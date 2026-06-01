#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int,int>mpp;
    int i,diff,n=nums.size();
    for(i=0;i<n;i++){
        diff=target-nums[i];
        if(mpp.find(diff)!=mpp.end()){
            return{mpp[diff],i};
        }
        mpp[nums[i]]=i;
    }
    return {-1,-1};
}

int main(){
    vector<int> v={2,7,11,15};
    vector<int> res = twoSum(v,9);
    for(auto x:res){
        cout<<x<<" ";
    }
    return 0;
}