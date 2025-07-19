#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPrime(int n) {
        if (n < 2) return false;
        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                return false;
            }
        }
        return true;  // This must be outside the loop
    }

    int digitSum(int s) {
        int sum = 0;
        while (s > 0) {
            sum += s % 10;
            s /= 10;  // Need to update s, not just s/10
        }
        return sum;
    }

    vector<int> primeWithPrimeDigitSum(int n, int m) {
        vector<int> ans;
        for (int i = n; i <= m; i++) {
            if (isPrime(i)) {
                int sum = digitSum(i);
                if (isPrime(sum)) {
                    ans.push_back(i);
                }
            }
        }
        return ans;
    }
};

int main() {
    int n, m;
    cin >> n >> m;

    Solution sol;
    vector<int> res = sol.primeWithPrimeDigitSum(n, m);

    for (int num : res) {
        cout << num << endl;
    }

    return 0;
}
