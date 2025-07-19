#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        // Your code here
        //  [0, 1, 2, 3, 4, 5, 6]
        int n=nums.size();
        int count=0;
        for(int i=0;i<n-1;i++){
          int sum=0;
          for(int j=i;j<n;j++){
            sum+=nums[j];
            if(sum==k){
              count++;
          }
          }
        }
        return count;
    }
};

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    
    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    
    int k;
    cin >> k;
    
    Solution sol;
    cout << sol.subarraySum(nums, k) << endl;

    return 0;
}
