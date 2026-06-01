#include <bits/stdc++.h>
using namespace std;

int maxProfit(vector<int>& prices) {
    int i,t=prices[0],maxDiff=0,n=prices.size();
    for(i=1;i<n;i++){
        if(t>prices[i])
            t=prices[i];
        if(prices[i]-t>maxDiff)
            maxDiff=prices[i]-t;
    }
    return maxDiff;
}

int main(){
    vector<int> v = {7,1,5,3,6,4};
    cout << maxProfit(v) << endl;
    return 0;
}