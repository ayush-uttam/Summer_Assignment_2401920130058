#include <bits/stdc++.h>
using namespace std;

int maxSubArray(vector<int>& nums) {
    int i,n=nums.size(),sum=0;
    int m=INT_MIN;
    for(i=0;i<n;i++){
        sum+=nums[i];
        if(sum>m){
            m=sum;
        } 
        if(sum<0){
            sum=0;
        } 
    }
    return m;
}

int main(){
    vector<int> v={-2,1,-3,4,-1,2,1,-5,4};
    cout << maxSubArray(v) << endl;
    return 0;
}