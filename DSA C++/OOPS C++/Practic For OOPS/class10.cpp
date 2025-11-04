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
        void setData(){
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
            
            cout << endl << endl;
        }

        void getData(){
            cout << "Id : " << this->id << endl;
            cout << "Brand : " << this->brand << endl;
            cout << "Variety : " << this->variety << endl;
            cout << "Container : " << this->container << endl;
            cout << "Price : " << this->price << endl << endl;
        } 
};

int main(){

    chocolate one;
    chocolate two;

    one.setData();
    two.setData();

    one.getData();
    two.getData();
}