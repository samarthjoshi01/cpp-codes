#include <iostream>
using namespace std;

class Student {
private:
    int scores[5];  // Array to hold 5 exam scores

public:
    // Function to input 5 scores from standard input
    void input() {
        for (int i = 0; i < 5; i++) {
            cin >> scores[i];
        }
    }

    // Function to calculate the total score (sum of 5 exam scores)
    int calculateTotalScore() {
        int total = 0;
        for (int i = 0; i < 5; i++) {
            total += scores[i];
        }
        return total;
    }
};

int main() {
    int n;  // Number of students
    cin >> n;

    Student students[n];  // Create an array of n students

    // Read input scores for all students
    for (int i = 0; i < n; i++) {
        cout<<"enter the marks for "<<i+1<<" student";
        students[i].input();
    }

    // Calculate Anna's total score (assume Anna is the first student)
    int annaTotalScore = students[0].calculateTotalScore();

    // Count how many students have a higher score than Anna
    int count = 0;
    for (int i = 1; i < n; i++) {  // Start from 1 because Anna is at index 0
        if (students[i].calculateTotalScore() > annaTotalScore) {
            count++;
        }
    }

    // Output the number of students who scored higher than Anna
    cout <<"no of students who scored greater than anna are "<<count << endl;

    return 0;
}
