#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isArmstrong(int n) {
        // Write your code here
        int digits=to_string(n).size();
        int r=n;
        int sum=0;
        while(n>0){
          int newNum=n%10;
          sum+=pow(newNum,digits);
          n=n/10;
        }
        if(sum==r) {
          return true;
        }
        return false;
    }
};

// For local testing
int main() {
    int N;
    cin >> N;

    Solution sol;
    cout << boolalpha << sol.isArmstrong(N) << endl;

    return 0;
}
