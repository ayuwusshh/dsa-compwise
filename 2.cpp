#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int calculateShippingCost(int w, int d) {
        // Your code here   total shipping cost....
        double weightCost=2*w;
        double distCost=d*0.5/10;
        double tc=5+weightCost+distCost;
      return tc;
    }
};

int main() {
    int w, d;
    cin >> w >> d;

    Solution sol;
    cout << sol.calculateShippingCost(w, d) << endl;

    return 0;
}
