#include <iostream>
using namespace std;

int main()
{
    int rowSize = 3;
    int colSize = 3;
    int a[3][3] = {{2, 4, 1}, {3, 5, 4}, {8, 2, 6}};
    int i, j;
    int transpose[3][3];

    for (i = 0; i < rowSize; i++)
    {
        for (j = 0; j < colSize; j++)
        {
            transpose[j][i] = a[i][j];
        }
    }

    cout << "Original Matrix : " << endl;

    for (i = 0; i < rowSize; i++)
    {
        for (j = 0; j < colSize; j++)
        {
            cout << a[i][j];
        }
        cout << endl;
    }

    cout << "Transpose Matrix : " << endl;
    
    for (i = 0; i < colSize; i++)
    {
        for (j = 0; j < rowSize; j++)
        {
            cout << transpose[i][j];
        }
        cout << endl;
    }
}