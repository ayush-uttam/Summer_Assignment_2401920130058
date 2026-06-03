#include <bits/stdc++.h>
using namespace std;

vector<int> sortedSquares(vector<int>& nums) {
    vector<int>v(nums.size());
    int low=0,high=nums.size()-1;
    int i=high,a,b;
    while(low<=high){
        a=nums[low]*nums[low];
        b=nums[high]*nums[high];
        if(a>=b){
            v[i--]=a;
            low++;
        }
        else{
            v[i--]=b;
            high--;
        }
    }
    return v;
}

int main(){
    vector<int> v ={-4,-1,0,3,10};
    vector<int>res=sortedSquares(v);
    for(auto x:res){
        cout << x << " " ;
    }
    return 0;
}