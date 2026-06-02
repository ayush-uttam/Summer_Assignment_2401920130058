#include <bits/stdc++.h>
using namespace std;

bool containsDuplicate(vector<int>& nums) {
    unordered_map<int,int> mpp;
    int i;
    for(i=0;i<nums.size();i++){
        mpp[nums[i]]++;
        if(mpp[nums[i]]==2)
            return true;
    }
    return false;
}

int main(){
    vector<int> v={1,1,2,3};
    cout << containsDuplicate(v)<<endl;
    return 0;
}