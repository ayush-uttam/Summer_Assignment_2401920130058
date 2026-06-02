#include <bits/stdc++.h>
using namespace std;

double findMaxAverage(vector<int>& nums, int k) {
    int i,n=nums.size(),sum=0;
    double avg=0.0,m;
    for(i=0;i<k;i++){
        sum+=nums[i];
    }
    avg=(double)sum/k;
    m=avg;
    for(i=1;i<n-k+1;i++){
        sum=sum+nums[k+i-1]-nums[i-1];
        avg=(double)sum/k;
        m=max(m,avg);
    }
    return m;
}

int main(){
    vector<int> v = {1,12,-5,-6,50,3};
    cout << findMaxAverage(v,4) << endl;
    return 0;
}