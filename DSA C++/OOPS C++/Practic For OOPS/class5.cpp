#include <iostream>
#include <string.h>
using namespace std;

class bag{

private : 
    int id;
    char brand[20];
    char color[20];
    char type[20];
    int price;


public :

    void setdata(int id, const char* brand, const char* color, const char* type, int price){
        this->id = id;
        strcpy(this->brand,brand);
        strcpy(this->color,color);
        strcpy(this->type,type);
        this->price = price;
    }

    void getdata(){
        cout << "Id : " << this->id << endl;
        cout << "Brand : " << this->brand << endl;
        cout << "Color : " << this->color << endl;
        cout << "Type : " << this->type << endl;
        cout << "Prize : " << this->price << endl << endl << endl; 
    }
};

int main(){

    bag one;
    one.setdata(1,"Nike","Black","Office Bag", 599);
    one.getdata();
    bag two;
    two.setdata(2,"Adidas","Gray","Laptop Bag",999);
    two.getdata();

    return 0;


}


