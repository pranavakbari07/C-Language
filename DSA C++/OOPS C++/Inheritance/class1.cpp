#include <iostream>
#include <string.h>
using namespace std;

// single level

// class parent
// {
//     char bike[50];

// public:
//     void greet()
//     {
//         cout << "Greeting from parents" << endl;
//     }
// };

// class child : public parent
// {

// public:
//     void greet2()
//     {
//         cout << "greeting from child";
//     }
// };

// multi level

// class grantparent{
//     public :

//      void greet(){
//         cout << "Greeting from grantparent" << endl;
//      }
// };

// class parent : public grantparent
// {
// public:
//     void greet2()
//     {
//         cout << "Greeting from parents" << endl;
//     }
// };

// class child : public parent
// {

// public:
//     void greet3()
//     {
//         cout << "greeting from child";
//     }
// };

// multiple

// class father{
//     public :

//     void greet(){
//        cout << "greeting from father" << endl;
//     }
// };

// class mother{
//     public :

//     void greet2(){
//        cout << "greeting from mother" << endl;
//     }
// };

// class child : public father , public mother{
//     public :

//     void greet3(){
//        cout << "greeting from child" << endl;
//     }
// };

// hierarchical inheritancre

// class father{
//         public :
    
//         void greet(){
//            cout << "greeting from father" << endl;
//         }
//     };
    
//     class child1 : public father{
//         public :
    
//         void greet2(){
//            cout << "greeting from child1" << endl;
//         }
//     };
    
//     class child2 : public father{
//         public :
    
//         void greet3(){
//            cout << "greeting from child2" << endl;
//         }
//     };

// hybrid inheritancre


    class person{
        public :
    
        void per(){
            cout << "This is from person" << endl;
        }
    };
    
    class employ : public person{
        public :
    
        void em(){
            cout << "This is from employ" << endl;
        }
    };
    
    class student : public person{
        public :
    
        void st(){
            cout << "This is from student" << endl;
        }
    };

    class parttimestudent : public employ , public student{
        public :
    
        void pest(){
            cout << "This is from parttimestudent" << endl;
        }
    };

int main()
{
    parttimestudent child;
    child.pest();
    child.em();
    child.st();
    child.student::per();


    return 0;
}