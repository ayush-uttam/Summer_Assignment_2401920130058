#include <bits/stdc++.h>
using namespace std;

int maxArea(vector<int>& height) {
    int low=0,high=height.size()-1;
    int d,m=0,q=0;
    while(low<high){
        d=high-low;
        q=min(height[low],height[high])*d;
        m=max(m,q);
        if(height[low]<=height[high]){
            low++;
        }
        else{
            high--;
        }
    }
    return m;
}

int main(){
    vector<int> v ={1,8,6,2,5,4,8,3,7};
    cout << maxArea(v) << endl;
    return 0;
}