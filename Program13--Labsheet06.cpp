// 13. Write a program to sort names of students using Bubble Sort.
#include <iostream>
#include <string>
using namespace std;
int main() {
    string studentNames[50];
    int totalStudents;
    cout << "Enter number of students: "; cin >> totalStudents;
    cout << "Enter names: ";
    for (int i = 0; i < totalStudents; i++) cin >> studentNames[i];
    for (int pass = 0; pass < totalStudents - 1; pass++) {
        for (int j = 0; j < totalStudents - pass - 1; j++) {
            if (studentNames[j] > studentNames[j + 1]) {   // alphabetical comparison
                string temporaryName = studentNames[j];
                studentNames[j] = studentNames[j + 1];
                studentNames[j + 1] = temporaryName;
            }
        }
    }
    cout << "Sorted names:\n";
    for (int i = 0; i < totalStudents; i++) cout << studentNames[i] << endl;
    return 0;
}
