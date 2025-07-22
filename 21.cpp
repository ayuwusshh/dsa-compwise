#include <bits/stdc++.h>
using namespace std;

struct Student {
    string Name;
    int Age;
    char Grade;
    char Gender;
};

class Solution {
public:
    pair<vector<string>, double> analyzeStudents(vector<Student>& students) {
        int femaleCount = 0, sum = 0;
        vector<string> older;
        
        for (const auto& s : students) {
            if (s.Age > 20) {
                older.push_back(s.Name);
            }
            if (s.Gender == 'F') {
                sum += (int)s.Grade;
                femaleCount++;
            }
        }
        
        double avg = femaleCount ? static_cast<double>(sum) / femaleCount : 0.0;
        return {older, avg};
    }
};

int main() {
    int N;
    cin >> N;
    vector<Student> students(N);
    for (int i = 0; i < N; i++) {
        cin >> students[i].Name >> students[i].Age >> students[i].Grade >> students[i].Gender;
    }
    
    Solution sol;
    auto result = sol.analyzeStudents(students);
    
    // Print the list of students older than 20
    cout << "[";
    for (size_t i = 0; i < result.first.size(); i++) {
        cout << "\"" << result.first[i] << "\"";
        if (i != result.first.size() - 1) cout << ", ";
    }
    cout << "]" << endl;
    
    // Print average ASCII value of female grades with 1 decimal
    cout << fixed << setprecision(1) << result.second << endl;
    
    return 0;
}
