// 3. Write a program to find the maximum and minimum element in a 1D array.
#include <iostream>
using namespace std;
int main() {
    int numbers[100], totalElements;
    cout << "Enter number of elements: "; cin >> totalElements;
    cout << "Enter elements: ";
    for (int i = 0; i < totalElements; i++) cin >> numbers[i];
    int maximumValue = numbers[0], minimumValue = numbers[0];
    for (int i = 1; i < totalElements; i++) {
        if (numbers[i] > maximumValue) maximumValue = numbers[i];
        if (numbers[i] < minimumValue) minimumValue = numbers[i];
    }
    cout << "Maximum = " << maximumValue << endl;
    cout << "Minimum = " << minimumValue;
    return 0;
}
