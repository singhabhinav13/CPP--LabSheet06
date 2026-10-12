// 19. Write a program to implement Binary Search for an array of floating-point numbers.
#include <iostream>
using namespace std;
int main() {
    float sortedFloats[100], targetValue;
    int totalElements, foundIndex = -1;
    cout << "Enter number of elements: "; cin >> totalElements;
    cout << "Enter floating-point numbers in ASCENDING order: ";
    for (int i = 0; i < totalElements; i++) cin >> sortedFloats[i];
    cout << "Enter number to search: "; cin >> targetValue;
    int lowIndex = 0, highIndex = totalElements - 1;
    while (lowIndex <= highIndex) {
        int middleIndex = lowIndex + (highIndex - lowIndex) / 2;
        if (sortedFloats[middleIndex] == targetValue) {
            foundIndex = middleIndex;
            break;
        }
        if (sortedFloats[middleIndex] < targetValue) lowIndex = middleIndex + 1;
        else highIndex = middleIndex - 1;
    }
    if (foundIndex != -1) cout << "Found at position " << foundIndex + 1;
    else cout << "Not found";
    return 0;
}
