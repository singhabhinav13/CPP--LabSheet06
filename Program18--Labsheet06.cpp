// 18. Write a program to implement Binary Search for an array of integers.
#include <iostream>
using namespace std;
int main() {
    int sortedIntegers[100], totalElements, targetValue, foundIndex = -1;
    cout << "Enter number of elements: "; cin >> totalElements;
    cout << "Enter integers in ASCENDING order: ";
    for (int i = 0; i < totalElements; i++) cin >> sortedIntegers[i];
    cout << "Enter integer to search: "; cin >> targetValue;
    int lowIndex = 0, highIndex = totalElements - 1;
    while (lowIndex <= highIndex) {
        int middleIndex = lowIndex + (highIndex - lowIndex) / 2;
        if (sortedIntegers[middleIndex] == targetValue) {
            foundIndex = middleIndex;
            break;
        }
        if (sortedIntegers[middleIndex] < targetValue) lowIndex = middleIndex + 1;
        else highIndex = middleIndex - 1;
    }
    if (foundIndex != -1) cout << "Found at position " << foundIndex + 1;
    else cout << "Not found";
    return 0;
}
