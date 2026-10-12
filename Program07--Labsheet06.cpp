// 7. Write a program to input and display elements of a 2D array (matrix).
#include <iostream>
using namespace std;
int main() {
    int matrix[10][10], rows, columns;
    cout << "Enter rows and columns: "; cin >> rows >> columns;
    cout << "Enter matrix elements:\n";
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < columns; j++)
            cin >> matrix[i][j];
    cout << "Matrix:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) cout << matrix[i][j] << " ";
        cout << endl;
    }
    return 0;
}
