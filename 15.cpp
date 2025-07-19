#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        // Your code here
        unordered_map<int,int> ok;
        vector<int> ans;
        int m=nums.size();
        int one=m/3;
        for(int num:nums){
          ok[num]++;
        }
        for(auto& it:ok){
          if(it.second>one){
            ans.push_back(it.first);
          }
        }
        return ans;
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
