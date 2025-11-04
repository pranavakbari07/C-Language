#include <iostream>
using namespace std;

int main() {

    int row;
    int col;

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

    int maxElement = arr[0][0];

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            if (arr[i][j] > maxElement) {
                maxElement = arr[i][j];
            }
        }
    }

    cout << "The largest element is : " << maxElement;
}