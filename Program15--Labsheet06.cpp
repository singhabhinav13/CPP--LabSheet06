// 15. Write a program to search an element in a 1D array using Binary Search.
#include <iostream>
using namespace std;
int main() {
    int sortedNumbers[100], totalElements, targetValue, foundIndex = -1;
    cout << "Enter number of elements: "; cin >> totalElements;
    cout << "Enter elements in ASCENDING order: ";
    for (int i = 0; i < totalElements; i++) cin >> sortedNumbers[i];
    cout << "Enter element to search: "; cin >> targetValue;
    int lowIndex = 0, highIndex = totalElements - 1;
    while (lowIndex <= highIndex) {
        int middleIndex = lowIndex + (highIndex - lowIndex) / 2;
        if (sortedNumbers[middleIndex] == targetValue) {
            foundIndex = middleIndex;
            break;
        } else if (sortedNumbers[middleIndex] < targetValue) {
            lowIndex = middleIndex + 1;    // search right half
        } else {
            highIndex = middleIndex - 1;   // search left half
        }
    }
    if (foundIndex != -1) cout << "Found at position " << foundIndex + 1;
    else cout << "Not found";
    return 0;
}
