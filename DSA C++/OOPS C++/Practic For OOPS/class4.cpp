#include <iostream>
#include <string.h>
using namespace std;

class car{
     private : 
      int id;
      char brand[20];
      char model[20];
      char color[10];
      float rate;
      int price;

     public : 
      void setdata(int id,const char* brand, const char* model, const char* color, float rate,int price){
        this->id = id;
        strcpy(this->brand,brand);
        strcpy(this->model,model);
        strcpy(this->color,color);
        this->rate = rate;
        this->price = price;
      }

      void getdata(){
          cout << "Id : " << this->id << endl;
          cout << "Brand : " << this->brand << endl;
          cout << "Model : " << this->model << endl;
          cout << "Color : " << this->color << endl;
          cout << "Rate : " << this->rate << endl;
          cout << "Prize : " << this->price << endl << endl << endl; 
      }
};

int main(){
    car one;
    one.setdata(1,"Samsumg","Neo QLED 8K","Black",4.5, 700000);
    one.getdata();
    car two;
    two.setdata(2,"Sony","BRAVIA 9 SERIES","White",4.8 , 531000);
    two.getdata();

    return 0;

}