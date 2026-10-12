// 14. Write a program to search an element in a 1D array using Linear Search.
#include <iostream>
using namespace std;
int main() {
    int numbers[100], totalElements, targetValue, foundIndex = -1;
    cout << "Enter number of elements: "; cin >> totalElements;
    cout << "Enter elements: ";
    for (int i = 0; i < totalElements; i++) cin >> numbers[i];
    cout << "Enter element to search: "; cin >> targetValue;
    // check every element one by one from the start
    for (int i = 0; i < totalElements; i++) {
        if (numbers[i] == targetValue) {
            foundIndex = i;
            break;
        }
    }
    if (foundIndex != -1) cout << "Found at position " << foundIndex + 1;
    else cout << "Not found";
    return 0;
}
