// 4. Write a program to reverse a 1D array.
#include <iostream>
using namespace std;
int main() {
    int numbers[100], totalElements;
    cout << "Enter number of elements: "; cin >> totalElements;
    cout << "Enter elements: ";
    for (int i = 0; i < totalElements; i++) cin >> numbers[i];
    // swap first with last, second with second last, and so on
    for (int left = 0, right = totalElements - 1; left < right; left++, right--) {
        int temporaryValue = numbers[left];
        numbers[left] = numbers[right];
        numbers[right] = temporaryValue;
    }
    cout << "Reversed array: ";
    for (int i = 0; i < totalElements; i++) cout << numbers[i] << " ";
    return 0;
}
