#include <iostream>
using namespace std;

int main() {

    int row, col, sumRow = 0, sumCol = 0;
    cout << "Enter Row  : ";
    cin >> row;
    cout << "Enter col  : ";
    cin >> col;

    int arr[row][col];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << "Enter value for row : " << i << " col : " << j << " : " ;
            cin >> arr[i][j];
        }
    }
    
    int rowIndex = 0;
    int colIndex = 0;
    
    for (int j = 0; j < col; j++) {
        sumRow += arr[rowIndex][j];
    }
    
    for (int i = 0; i < row; i++) {
        sumCol += arr[i][colIndex];
    }

    cout << "Sum of elements in row : " << sumRow << endl;
    cout << "Sum of elements in column : " << sumCol;
}
