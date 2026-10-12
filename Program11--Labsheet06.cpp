// 11. Write a program to sort an array using Bubble Sort in ascending order.
#include <iostream>
using namespace std;
int main() {
    int numbers[100], totalElements;
    cout << "Enter number of elements: "; cin >> totalElements;
    cout << "Enter elements: ";
    for (int i = 0; i < totalElements; i++) cin >> numbers[i];
    for (int pass = 0; pass < totalElements - 1; pass++) {
        for (int j = 0; j < totalElements - pass - 1; j++) {
            if (numbers[j] > numbers[j + 1]) {   // swap if out of order
                int temporaryValue = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temporaryValue;
            }
        }
    }
    cout << "Sorted (ascending): ";
    for (int i = 0; i < totalElements; i++) cout << numbers[i] << " ";
    return 0;
}
