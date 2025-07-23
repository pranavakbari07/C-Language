#include <iostream>
#include <string.h>
using namespace std;

class shose{
    
    private : 
      int id;
      char brand[50];
      int size;
      char color[50];
      int rate;

      public : 

        void setdata(int id,const char* brand, int size,const char* color, int rate){
          this->id = id;
          strcpy(this->brand,brand);
          this->size = size;
          strcpy(this->color,color);
          this->rate = rate;
        }

        void getdata(){
          cout << "Id : " << this->id << endl;
          cout << "Brand : " << this->brand << endl;
          cout << "Size : " << this->size << endl;
          cout << "Color : " << this->color << endl;
          cout << "Rate : " << this->rate << endl;
        }
};

int main(){

  shose one;
  one.setdata(1,"Nike",7,"Black",4);
  one.getdata();
  shose two;
  two.setdata(2,"Adidas",6,"Red",3);
  two.getdata();

  return 0;
}
