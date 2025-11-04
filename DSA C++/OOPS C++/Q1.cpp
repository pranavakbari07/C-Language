#include <iostream>
#include <string.h>
using namespace std;

class person
{
    private:
        int id;
        char name[50];
        int age;

    public :

    void setdata(int id,const char* name ,int age){
        this->id = id;
        this->age = age;
        strcpy(this->name, name);
    }

    void getdata(){
        cout << "Id : " << this->id << endl;
        cout << "name : " << this->name << endl;
        cout << "age : " << this->age << endl;
    }
    
      
};

int main()
{

    person one;
    person two;
    one.setdata(1,"Rahul",23);
    one.getdata();
    two.setdata(2,"Sumit",32);
    two.getdata();
 
    return 0;
}