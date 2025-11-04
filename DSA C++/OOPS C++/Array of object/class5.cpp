#include <iostream>
using namespace std;
#include <string.h>

class chocolate{
    private :
        int id;
        char brand[50];
        char variety[50];
        char container[50];
        int price;

    public :
        void setdata(){
            cout << "Enter a id : ";
            cin >> this->id;  

            cout << "Enter a brand : ";
            cin >> this->brand; 
            
            cout << "Enter a Variety : ";
            cin >> this->variety; 

            cout << "Enter a Container : ";
            cin >> this->container; 

            cout << "Enter a price : ";
            cin >> this->price;    
            
            cout << endl;
        }

        void getdata(){
            cout << "Id : " << this->id << endl;
            cout << "Brand : " << this->brand << endl;
            cout << "Variety : " << this->variety << endl;
            cout << "Container : " << this->container << endl;
            cout << "Price : " << this->price << endl << endl;
        } 
};



int main(){

    cout << "Welcome to Chocklate Details Portal ! " << endl;

    cout << "Enter the number of Chocklate Details you want to add : " << endl;
    int num;
    cin >> num;

    chocolate obj[num];

    for (int i = 0; i < num; i++)
    {
        obj[num].setdata();
    }
    cout << endl << endl;

    for (int i = 0; i < num; i++)
    {
        obj[num].getdata();
    }
}