#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        // Your code here
        sort(nums.begin(),nums.end());//[1 2 3 5]
        int m=nums.size();
      for(int i=1;i<m;i++){
        if(nums[0]!=1) return 1;
        if(nums[i]-nums[i-1]!=1) {
          return nums[i]-1;
        }
      }
      return nums[m-1]+1;
    }
};

int main() {
    int N;
    cin >> N;
    vector<int> nums(N);
    for(int i = 0; i < N; i++) {
        cin >> nums[i];
    }

    Solution sol;
    cout << sol.missingNumber(nums) << endl;

    return 0;
}
