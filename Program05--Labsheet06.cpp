// 5. Write a program to input 10 numbers in an array and count how many are even and odd.
#include <iostream>
using namespace std;
int main() {
    int numbers[10], evenCount = 0, oddCount = 0;
    cout << "Enter 10 numbers: ";
    for (int i = 0; i < 10; i++) {
        cin >> numbers[i];
        if (numbers[i] % 2 == 0) evenCount++;
        else oddCount++;
    }
    cout << "Even numbers: " << evenCount << endl;
    cout << "Odd numbers: " << oddCount;
    return 0;
}
