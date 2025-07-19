#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int closestDivisible(int X, int Y) {
        // Write your code here
        int res=X%Y;     // 25%4==1
        int lower=X-res;
        int higher=lower+Y;
        if(abs(X-lower)<abs(higher-X)){
          return lower;
        }else{
          return higher;
        }
    }
};

int main() {
    int X, Y;
    cin >> X >> Y;

    Solution sol;
    cout << sol.closestDivisible(X, Y) << endl;

    return 0;
}
