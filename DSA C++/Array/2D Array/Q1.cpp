#include <iostream>
using namespace std;

int main()
{

    // int arr[3][3] = {{12, 13, 14},
    //                  {15, 16, 17},
    //                  {18, 19, 20}};

    // cout << arr[1][1];

    // int arr2[3][3];

    // for(int i=0; i<3; i++){
    //     for(int j=0; j<3; j++){
    //         cout << "Enter Value : ";
    //         cin >> arr2[i][j];
    //     }
    // }

    // for(int i=0; i<3; i++){
    //     for(int j=0; j<3; j++){
    //         cout << arr2[i][j] << " ";
    //     }

    //     cout << endl;
    // }

    //  int arr2[3][4];

    //     for(int i=0; i<3; i++){
    //         for(int j=0; j<4; j++){
    //             cout << "Enter Value : ";
    //             cin >> arr2[i][j];
    //         }
    //     }

    //     for(int i=0; i<3; i++){
    //         for(int j=0; j<4; j++){
    //             cout << arr2[i][j] << " ";
    //         }

    //         cout << endl;
    //     }

    // int arr[4][2];

    // for(int i=0;i<4;i++){
    //     for(int j=0;j<2;j++){
    //         cout << "Enter Value : ";
    //         cin >> arr[i][j];
    //     }
    // }
    // for(int i=0;i<4;i++){
    //     for(int j=0;j<2;j++){
    //         cout << arr[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    int row;
    int col;

    cout << "Enter Row  : ";
    cin >> row;
    cout << "Enter col  : ";
    cin >> col;

    int arr[row][col];
    int sum = 0;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << "Enter value for row : " << i << " col : " << j << " : " ;
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
            sum += arr[i][j];
        }
        cout << endl;
    }

    
    cout << "sum of all element : " << sum << endl;
    cout << "Everage of all element : " << sum / (row*col) << endl;


    int userrow;
    int rowsum =0; 

    cout << "Enter userrow : ";
    cin >> userrow;
 

    for (int j = 0; j < col; j++)
    {
        rowsum += arr[userrow][j];
    }

    cout << rowsum;
}