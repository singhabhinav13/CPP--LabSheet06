// 10. Write a program to multiply two matrices.
#include <iostream>
using namespace std;
int main() {
    int firstMatrix[10][10], secondMatrix[10][10], productMatrix[10][10];
    int firstRows, firstColumns, secondRows, secondColumns;
    cout << "Enter rows and columns of first matrix: "; cin >> firstRows >> firstColumns;
    cout << "Enter rows and columns of second matrix: "; cin >> secondRows >> secondColumns;
    // multiplication is possible only if columns of first = rows of second
    if (firstColumns != secondRows) {
        cout << "Multiplication not possible";
        return 0;
    }
    cout << "Enter first matrix:\n";
    for (int i = 0; i < firstRows; i++)
        for (int j = 0; j < firstColumns; j++) cin >> firstMatrix[i][j];
    cout << "Enter second matrix:\n";
    for (int i = 0; i < secondRows; i++)
        for (int j = 0; j < secondColumns; j++) cin >> secondMatrix[i][j];
    for (int i = 0; i < firstRows; i++) {
        for (int j = 0; j < secondColumns; j++) {
            productMatrix[i][j] = 0;
            for (int k = 0; k < firstColumns; k++)
                productMatrix[i][j] += firstMatrix[i][k] * secondMatrix[k][j];
        }
    }
    cout << "Product of matrices:\n";
    for (int i = 0; i < firstRows; i++) {
        for (int j = 0; j < secondColumns; j++) cout << productMatrix[i][j] << " ";
        cout << endl;
    }
    return 0;
}
