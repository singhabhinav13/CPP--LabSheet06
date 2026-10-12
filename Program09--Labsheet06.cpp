// 9. Write a program to subtract two matrices.
#include <iostream>
using namespace std;
int main() {
    int firstMatrix[10][10], secondMatrix[10][10], differenceMatrix[10][10], rows, columns;
    cout << "Enter rows and columns: "; cin >> rows >> columns;
    cout << "Enter first matrix:\n";
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < columns; j++) cin >> firstMatrix[i][j];
    cout << "Enter second matrix:\n";
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < columns; j++) cin >> secondMatrix[i][j];
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < columns; j++)
            differenceMatrix[i][j] = firstMatrix[i][j] - secondMatrix[i][j];
    cout << "Difference of matrices:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) cout << differenceMatrix[i][j] << " ";
        cout << endl;
    }
    return 0;
}
