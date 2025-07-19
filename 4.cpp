#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        // Your code here
        unordered_map<int,int> freq;
        int sum=0;
        for(int num:nums){
          freq[num]++;
        }  
        for(int i:nums){
          if(freq[i]==1){
            sum+=i;
          }
        }     
        return sum;
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
    cout << sol.sumOfUnique(nums) << endl;

    return 0;
}
