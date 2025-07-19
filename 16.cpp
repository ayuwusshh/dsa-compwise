#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        // Your code here
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
    vector<int> result = sol.majorityElement(nums);

    for(int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
