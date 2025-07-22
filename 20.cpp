#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // Write your logic here
        unordered_map<int,int> m;
        int n=nums.size();
        int half=n/2;
        for(int num:nums){
          m[num]++;
          if(m[num]>half){
            return num;
          }
        }
        return -1;
    }
};

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for(int i = 0; i < n; i++){
        cin >> nums[i];
    }
    
    Solution obj;
    cout << obj.majorityElement(nums) << endl;
    
    return 0;
}
