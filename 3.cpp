#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        // Your code here
        int n=nums.size();
        int sum=nums[0];
        int maxSum=nums[0];
        for(int i=1;i<n;i++){
          sum=max(nums[i],sum+nums[i]);
          maxSum=max(sum,maxSum);
        }
        return maxSum;
    }
};

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    
    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    
    Solution sol;
    cout << sol.maxSubArray(nums) << endl;

    return 0;
}
