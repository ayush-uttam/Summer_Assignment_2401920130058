#include <bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int>& nums) {
    int i,j=0,n=nums.size();
    for(i=1;i<n;i++){
        if(nums[j]!=nums[i]){
            nums[++j]=nums[i];
        }
    }
    return j+1;
}


int main(){
    vector<int> v = {1,1,2};
    cout << removeDuplicates(v) << endl;
    return 0;
}