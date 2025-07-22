#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int subarrayBitwiseORs(vector<int>& arr) {
        // Write your logic here
    }
};

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    
    Solution obj;
    cout << obj.subarrayBitwiseORs(arr) << endl;
    
    return 0;
}
