#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string removeDuplicateWords(string s) {
        // Your code here
        unordered_map<string,int> freq;
        vector<string>words;
        string word;
        stringstream ss(s);
        while(ss>>word){
          freq[word]++;
          words.push_back(word);
        }
        string res="";
        for(string w:words){
          if(freq[w]==1){
            if(!res.empty()) res+=" ";
            res+=w;
          }
        }
        return res;
    }
};

int main() {
    string s;
    getline(cin, s);
    Solution sol;
    cout << sol.removeDuplicateWords(s) << "\n";
    return 0;
}
