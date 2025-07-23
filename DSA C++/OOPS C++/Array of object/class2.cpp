#include <iostream>
#include <string.h>
using namespace std;

class mobile
{
private:
    int id;
    char brand[20];
    char model[20];
    int bugget;
    int ramrom;

public:
    void setdata()
    {
        cout << "Enter your ID : ";
        cin >> this->id;
        cout << "Enter your Brand : ";
        cin >> this->brand;
        cout << "Enter your Model : ";
        cin >> this->model;
        cout << "Enter your Bugget : ";
        cin >> this->bugget;
        cout << "Enter your Ram & Rom : ";
        cin >> this->ramrom;
    }

    void getdata()
    {
        cout << "ID : " << this->id << endl;
        cout << "Brand : " << this->brand << endl;
        cout << "MOdel : " << this->model << endl;
        cout << "Bugget : " << this->bugget << endl;
        cout << "Ram & Rom : " << this->ramrom << endl;
    }
};

int main()
{
    cout << "Welcome to Mobile Details Portal ! " << endl << endl;

    cout << "Enter the number of Mobile Details you want to add : " << endl;
    int num;
    cin >> num;

    mobile obj[num];

    for (int i = 0; i < num; i++)
    {
        obj[num].setdata();
    }
    cout << endl << endl;

    for (int i = 0; i < num; i++)
    {
        obj[num].getdata();
    }

    return 0;

    return 0;
}