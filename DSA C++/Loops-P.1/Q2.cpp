#include <iostream>
using namespace std;

main(){

   int n;
   int fact = 1;

   cout << "Enter a number to found factorial :";
   cin >> n;

   for(int i=n; i>=1; i--){

      if(n <= 1){
         fact = 1;
         break;
      }

    fact = fact * i;
   }

   cout << "factorial of " << n << " is " << fact;
   
}