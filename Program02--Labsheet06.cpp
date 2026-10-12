// 2. Write a program to find the sum of all elements in a 1D array.
#include <iostream>
using namespace std;
int main() {
    int numbers[100], totalElements, sumOfElements = 0;
    cout << "Enter number of elements: "; cin >> totalElements;
    cout << "Enter elements: ";
    for (int i = 0; i < totalElements; i++) {
        cin >> numbers[i];
        sumOfElements += numbers[i];
    }
    cout << "Sum = " << sumOfElements;
    return 0;
}
