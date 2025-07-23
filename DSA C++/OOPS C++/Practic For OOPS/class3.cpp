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

     public : 
      void setdata(int id,const char* brand, const char* model, const char* color, float rate){
        this->id = id;
        strcpy(this->brand,brand);
        strcpy(this->model,model);
        strcpy(this->color,color);
        this->rate = rate;
      }

      void getdata(){
          cout << "Id : " << this->id << endl;
          cout << "Brand : " << this->brand << endl;
          cout << "Model : " << this->model << endl;
          cout << "Color : " << this->color << endl;
          cout << "Rate : " << this->rate << endl << endl << endl;
      }
};

int main(){
    car one;
    one.setdata(1,"Honda","Alcazar","Black",4.5);
    one.getdata();
    car two;
    two.setdata(2,"Hyundai","Creata","White",4.8);
    two.getdata();

    return 0;

}