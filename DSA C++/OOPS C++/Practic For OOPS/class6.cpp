#include <iostream>
#include <string.h>
using namespace std;

class bank{
   private : 
     int id;
     char branch[20];
     int counterNo;
     int AccNo;
     int Balance;

    public :
      void setdata(){
        cout << "Enter your ID : ";
        cin >> this->id; 
        cout << "Enter your Branch : ";
        cin >> this->branch; 
        cout << "Enter your Counter NO : ";
        cin >> this->counterNo; 
        cout << "Enter your Accounte No : ";
        cin >> this->AccNo;
        cout << "Enter your Balance : ";
        cin >> this->Balance;  
    }

    void getdata(){
        cout << "Id : " << this->id << endl;
        cout << "Branch : " << this->branch << endl;
        cout << "Counter No : " << this->counterNo << endl;
        cout << "Account No : " << this->AccNo << endl;
        cout << "Balance : " << this->Balance << endl << endl << endl; 
    }
};

int main(){
    bank one;
    one.setdata();
    one.getdata();
    bank two;
    two.setdata();
    two.getdata();

    return 0;
}
