// 1. Write a program to input and display elements of a 1D array.
#include <iostream>
using namespace std;
int main() {
    int numbers[100], totalElements;
    cout << "Enter number of elements: "; cin >> totalElements;
    cout << "Enter elements: ";
    for (int i = 0; i < totalElements; i++) cin >> numbers[i];
    cout << "Array elements: ";
    for (int i = 0; i < totalElements; i++) cout << numbers[i] << " ";
    return 0;
}
