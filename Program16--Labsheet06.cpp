// 16. Write a program to count the number of occurrences of a given element in an array (Linear Search).
#include <iostream>
using namespace std;
int main() {
    int numbers[100], totalElements, targetValue, occurrenceCount = 0;
    cout << "Enter number of elements: "; cin >> totalElements;
    cout << "Enter elements: ";
    for (int i = 0; i < totalElements; i++) cin >> numbers[i];
    cout << "Enter element to count: "; cin >> targetValue;
    for (int i = 0; i < totalElements; i++)
        if (numbers[i] == targetValue) occurrenceCount++;
    cout << targetValue << " occurs " << occurrenceCount << " time(s)";
    return 0;
}
