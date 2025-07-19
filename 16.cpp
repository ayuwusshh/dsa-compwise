#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maximumEfficiency(vector<int>& arr) {
        // Your code here
        //[4, -3, -9, 5, 2]
        int n=arr.size();
        int eff=INT_MIN;
        for(int i=0;i<n-2;i++){
         for(int j=i+1;j<n-1;j++){
          for(int k=j+1;k<n;k++){
            int prod=arr[i]*arr[j]*arr[k];
            eff=max(eff,prod);
         }
        }
      }
        return eff;
    }
};

int main() {
    int N;
    cin >> N;
    vector<int> arr(N);
    for(int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    Solution sol;
    cout << sol.maximumEfficiency(arr) << endl;

    return 0;
}
