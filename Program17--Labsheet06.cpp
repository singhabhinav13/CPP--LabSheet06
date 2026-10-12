// 17. Write a program to check if a given number is present in the array or not (Linear Search).
#include <iostream>
using namespace std;
int main() {
    int numbers[100], totalElements, targetValue;
    bool isPresent = false;
    cout << "Enter number of elements: "; cin >> totalElements;
    cout << "Enter elements: ";
    for (int i = 0; i < totalElements; i++) cin >> numbers[i];
    cout << "Enter number to check: "; cin >> targetValue;
    for (int i = 0; i < totalElements; i++) {
        if (numbers[i] == targetValue) {
            isPresent = true;
            break;
        }
    }
    cout << targetValue << (isPresent ? " is present in the array" : " is not present in the array");
    return 0;
}
