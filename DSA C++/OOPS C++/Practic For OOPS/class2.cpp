#include <iostream>
#include <string.h>
using namespace std;

class cloths{
    
    private : 
      int id;
      char brand[50];
      char size[5];
      char color[50];
      int rate;

      public : 

        void setdata(int id,const char* brand,const char* size,const char* color, int rate){
          this->id = id;
          strcpy(this->brand,brand);
          strcpy(this->size,size);
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

  cloths one;
  one.setdata(1,"Nike","m","Black",4);
  one.getdata();
  cloths two;
  two.setdata(2,"Adidas","xl","Red",3);
  two.getdata();

  return 0;
}
