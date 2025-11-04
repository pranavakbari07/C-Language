#include <iostream>
#include <string.h>
using namespace std;

class book{
  private : 

   int id;
   char name[20];
   char bestseller[20];
   int rate;
   int price;

   public :
    void setdata(){
        cout << "Enter your id : ";
        cin >> this->id;
        cout << "Enter Book Name : ";
        cin >> this->name;
        cout << "Enter Beat seller : ";
        cin >> this->bestseller;
        cout << "Enter your rate : ";
        cin >> this->rate;
        cout << "Enter Price : ";
        cin >> this->price;
    }

    void getdata(){
        cout << "ID : " << this->id << endl; 
        cout << "Name : " << this->name << endl; 
        cout << "Best seller : " << this->bestseller << endl; 
        cout << "Rate : " << this->rate << endl; 
        cout << "Price : " << this->price << endl << endl; 
    }
};

int main(){
    book one;
    one.setdata();
    one.getdata();
    book two;
    two.setdata();
    two.getdata();


    return 0;
}