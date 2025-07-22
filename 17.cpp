#include <bits/stdc++.h>
using namespace std;

int maxDifference(vector<int>& nums) {
    // Write your logic here
    int n=nums.size();
    int sum=INT_MIN;
    for(int i=0;i<n-1;i++){
      for(int j=i+1;j<n;j++){
        int diff=nums[j]-nums[i];
        sum=max(diff,sum);
      }
    }
    return sum;
}

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for(int i = 0; i < n; i++){
        cin >> nums[i];
    }
    
    cout << maxDifference(nums) << endl;
    return 0;
}
