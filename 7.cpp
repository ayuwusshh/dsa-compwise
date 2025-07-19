#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string highestScorer(vector<int>& score, vector<string>& names) {
        // Write your code here
        int n=score.size();
        int m=names.size();
        int max=score[0];
        int index=0;
        for(int i=1;i<n;i++){
          if(score[i]>max){
            max=score[i];
            index=i;
          }
        }
        return names[index];
    }
};

// For local testing
int main() {
    int N;
    cin >> N;

    vector<int> score(N);
    for (int i = 0; i < N; i++) {
        cin >> score[i];
    }

    vector<string> names(N);
    for (int i = 0; i < N; i++) {
        cin >> names[i];
    }

    Solution sol;
    cout << sol.highestScorer(score, names) << endl;

    return 0;
}
