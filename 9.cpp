#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<string> modifyArray(vector<int>& nums) {
        // Write your code here
        vector<string> s;
        for(int i:nums){
          if(i%3==0 && i%5==0){
            s.push_back("ThreeFive");
          }else if( i%3==0){
          s.push_back("Three"); 
          }else if( i%5==0){
          s.push_back("Five"); 
          }else{
            s.push_back(to_string(i));
          }
        }
        return s;
    }
};

// For local testing
int main() {
    int N;
    cin >> N;

    vector<int> nums(N);
    for (int i = 0; i < N; i++) {
        cin >> nums[i];
    }

    Solution sol;
    vector<string> result = sol.modifyArray(nums);

    for (const string& s : result) {
        cout << s << " ";
    }
    cout << endl;

    return 0;
}
