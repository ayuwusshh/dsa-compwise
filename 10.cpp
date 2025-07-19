#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isValid(const string& s) {
        if (s.size() < 8) return false;
        bool hasDigit = false, hasSpecial = false, hasUpper = false, hasLower = false;

        for (char c : s) {
            if (isdigit(c)) hasDigit = true;
            if (c == '#' || c == '@') hasSpecial = true;
            if (isupper(c)) hasUpper = true;
            else if (islower(c)) hasLower = true;
        }
        return hasDigit && hasSpecial && hasUpper && hasLower;
    }

    string modifyPassword(string s, int n) {
        for(int i=0;i<int(s.size());i++){
          char org=s[i];
          s[i]=char(s[i]+2);
          if(org=='#') s[i]='@';
          if(org=='@') s[i]='#';
        }
        return s;
    }
};

int main() {
    string s;
    cin >> s;

    int n;
    cin >> n;

    Solution sol;
    cout << sol.modifyPassword(s, n) << "\n";

    return 0;
}
