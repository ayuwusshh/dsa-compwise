#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        // Your code here
        vector<vector<int>> result;
        int n=nums.size();
        for(int i=0;i<n;i++){
          int j=0;
          while(j<=i){
            result.push_back({nums[i],nums[j]});
            j++;
          }
        }
        return result;
    }
};

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for(int i = 0; i < n; ++i) {
        cin >> nums[i];
    }
    
    Solution sol;
    vector<vector<int>> result = sol.subsets(nums);
    
    for (const auto& subset : result) {
        cout << "[";
        for (size_t i = 0; i < subset.size(); ++i) {
            cout << subset[i];
            if (i != subset.size() - 1) cout << ", ";
        }
        cout << "]\n";
    }
    
    return 0;
}
