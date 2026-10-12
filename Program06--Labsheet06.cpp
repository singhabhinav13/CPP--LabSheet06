// 6. Write a program to search an element in a 1D array (without using functions).
#include <iostream>
using namespace std;
int main() {
    int numbers[100], totalElements, targetValue, foundIndex = -1;
    cout << "Enter number of elements: "; cin >> totalElements;
    cout << "Enter elements: ";
    for (int i = 0; i < totalElements; i++) cin >> numbers[i];
    cout << "Enter element to search: "; cin >> targetValue;
    for (int i = 0; i < totalElements; i++) {
        if (numbers[i] == targetValue) {
            foundIndex = i;
            break;
        }
    }
    if (foundIndex != -1) cout << "Element found at position " << foundIndex + 1;
    else cout << "Element not found";
    return 0;
}
