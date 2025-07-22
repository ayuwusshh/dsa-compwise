#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string isDivisibleBy9(int num) {
        // Write your logic here
        // int n=to_string(num).size();
        int sum=0;
        while(num>0){
          int newnum=num%10;
          sum+=newnum;
          num=num/10;
        }
        if(sum%9==0) return "Yes";
        return "No";
    }
};

int main() {
    int num;
    cin >> num;
    
    Solution obj;
    cout << obj.isDivisibleBy9(num) << endl;
    
    return 0;
}
