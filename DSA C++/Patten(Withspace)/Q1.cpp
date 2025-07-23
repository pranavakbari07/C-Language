#include <iostream>
using namespace std;

int main()
{

    // for (int i = 1; i <= 5; i++)
    // {
    //     for (int k = 5; k > i; k--)
    //     {
    //         cout << " ";
    //     }

    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << j;
    //     }

    //     cout << endl;
    // }

    // for (int i = 5; i >= 1; i--)
    // {
    //     for (int k = i; k < 5; k++)
    //     {
    //         cout << " ";
    //     }

    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << j;
    //     }

    //     cout << endl;
    // }

    int num = 1;
    for (int i = 1; i <= 4; i++)
    {

        for (int j = 1; j <= i; j++)
        {
            cout << num << " ";
            num++;
        }
 
        cout << endl;
    }
}
