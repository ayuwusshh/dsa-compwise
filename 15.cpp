#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void sortColors(vector<int>& nums) {
        // Your code here
       for(int k=0;k<nums.size();k++){
         for(int i=1;i<nums.size();i++){
          if(nums[i]<nums[i-1]){
            swap(nums[i],nums[i-1]);
          }
        }
       }
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
    sol.sortColors(nums);

    for(int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
