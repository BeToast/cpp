#include "doubleNum.h"

#include <cstdlib>
#include <iostream>

// #define DEBUG;

double askForDouble()
{
   double d{};
   std::cout << "Input a double: ";
   std::cin >> d;

   return d;
}

/*
 * inline keywoard is a hint not a decree to the compiler
 * used to declare multiple of the same function because they are not linked,
 * rather they are put inline a comiplation time.
 * used in HEADER files, only
 */
constexpr void printSus(){ //constexpr works on functions as well :)
   std::cout << "sus\n";
}

int main()
{
   constexpr double pi{3.14159};
   // const int sides_of_square;
   //ask user for a double and assign it to x
   double x{askForDouble()};
   //ask user for a double and assign it to y
   double y{askForDouble()};

   //get a basic math symbol from user
   char math_symbol{};
   std::cout << "Enter of of the following: +, -, *, or / : ";
   std::cin >> math_symbol;

   if(math_symbol == '+')
   {
      std::cout << x << " + " << y << " is " << x+y << '\n'; 
   }

   
   

#ifdef DEBUG
   std::cerr << "cerr does not use the buffer and is superior for debugging";
#endif

   return EXIT_SUCCESS;
}








// std::cout << "Input a keyboard character: "; // assume the user enters "abcd" (without quotes)

//    char ch{};
//    std::cin >> ch; // ch = 'a', "bcd" is left queued.
//    std::cout << "You entered: " << ch << '\n';

//    // Note: The following cin doesn't ask the user for input, it grabs queued input!
//    std::cin >> ch; // ch = 'b', "cd" is left queued.
//    std::cout << "You entered: " << ch << '\n';

//    return 0;

   // std::cout << sizeof(size_t) << '\n';

   // double zero{0.0};
   // double posinf{5.0 / zero}; // positive infinity
   // std::cout << posinf << '\n';

   // double neginf{-5.0 / zero}; // negative infinity
   // std::cout << neginf << '\n';

   // double nan{zero / zero}; // not a number (mathematically invalid)
   // std::cout << nan << '\n';

   // prompt user to type number
   //  std::cout << "enter an number: ";

   // instanciate i and await users input number
   //  std::int32_t i{};
   //  std::int_fast32_t i{}; //wow really fast on cpu with minimum of 32bits
   //  std::cin >> i;

   // output the number recieved and its double
   //  std::cout << i << " doubled is: " << doubleNum(i) << '\n';