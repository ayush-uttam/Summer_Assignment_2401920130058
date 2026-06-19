#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        deque<int> dq;
        vector<int> ans;
        for(int i=0;i<nums.size();i++) {
            while(!dq.empty() && dq.front()<=i-k)
                dq.pop_front();
            while(!dq.empty() && nums[dq.back()]<=nums[i])
                dq.pop_back();
            dq.push_back(i);
            if(i>=k-1)
                ans.push_back(nums[dq.front()]);
        }
        return ans;
    }
};

int main(){
    Solution ob;
    vector<int>v={1,3,-1,-3,5,3,6,7};
    vector<int>res=ob.maxSlidingWindow(v,3);
    for(auto x:res){
        cout<<x<<" ";
    }
    return 0;
}