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
   

  cout << "Welcome to Bank Deatils Portal ! " << endl << endl;

  cout << "Enter the number of Bank Details you want to add : " << endl;
  int num;
  cin >> num;


  bank obj[num];

  for(int i = 0; i<num; i++){
    obj[num].setdata();
  }

  cout << endl << endl;

  for(int i = 0; i<num; i++){
    obj[num].getdata();
  }

    return 0;
}
