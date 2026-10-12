// 20. Write a program to search the largest element in a sorted array using Binary Search.
#include <iostream>
using namespace std;
int main() {
    int sortedNumbers[100], totalElements;
    cout << "Enter number of elements: "; cin >> totalElements;
    cout << "Enter elements in ASCENDING order: ";
    for (int i = 0; i < totalElements; i++) cin >> sortedNumbers[i];
    int lowIndex = 0, highIndex = totalElements - 1;
    // keep moving right while a bigger (or equal) element exists after middle
    while (lowIndex < highIndex) {
        int middleIndex = lowIndex + (highIndex - lowIndex) / 2;
        if (sortedNumbers[middleIndex] <= sortedNumbers[middleIndex + 1])
            lowIndex = middleIndex + 1;
        else
            highIndex = middleIndex;
    }
    cout << "Largest element = " << sortedNumbers[lowIndex];
    return 0;
}
