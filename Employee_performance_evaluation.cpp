#include <iostream>
#include <string>
#include <map>
using namespace std;

int main() {
    // define knowledge base
    map<string, int> factors;
    factors["Attendance"] = 0;
    factors["Quality of work"] = 0;
    factors["Efficiency"] = 0;
    factors["Communication skills"] = 0;
    factors["Initiative"] = 0;
    
    // gather input from user
    cout << "Please rate the employee on a scale of 1-10 for each factor:" << endl;
    for (auto& factor : factors) {
        cout << factor.first << ": ";
        cin >> factor.second;
    }
    
    // evaluate performance
    int total_score = 0;
    for (auto& factor : factors) {
        total_score += factor.second;
    }
    double average_score = static_cast<double>(total_score) / factors.size();
    
    // provide feedback
    cout << "Employee performance evaluation:" << endl;
    cout << "Total score: " << total_score << endl;
    cout << "Average score: " << average_score << endl;
    
    if (average_score >= 9) {
        cout << "Outstanding performance!" << endl;
    } else if (average_score >= 7) {
        cout << "Good job." << endl;
    } else if (average_score >= 5) {
        cout << "Needs improvement." << endl;
    } else {
        cout << "Unsatisfactory performance." << endl;
    }
    
    return 0;
}
