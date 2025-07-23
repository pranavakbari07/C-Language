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
    cout << "Welcome to Book Details Portal ! " << endl << endl;

    cout << "Enter the number of Book Details you want to add : " << endl;
    int num;
    cin >> num;

    book obj[num];

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
}