#include "doubleNum.h"

#include <cstdlib>
#include <iostream>


int main()
{
   //prompt user to type number
   std::cout << "enter an number: ";

   //instanciate i and await users input number
   float i{};
   std::cin >> i;

   //output the number recieved and its double
   std::cout << i << " doubled is: " << doubleNum(i) << '\n';

   return EXIT_SUCCESS;
}