////////////////////////////////////////////////////////////////////////////////
/// \file
/// \brief      Main module for a Problem: String-Number conversions and
///             expensive concatenations.
/// \author     Sergey Shershakov
/// \version    0.1.0
/// \date       22.01.2022
///             This code is for educational purposes of the course "Introduction
///             to programming" provided by the Faculty of Computer Science
///             at the Higher School of Economics.
///
/// TASK DESCRIPTION
///
/// A program investigates the semantics of std::string class and performs
/// string-number conversions.
///
/// 1) Use the obsolete function atoi to convert a string representation of an
/// integer to an integer value. Then use the stoi function to do the same task.
///
/// 2) Try to apply the itoa function for form the string representation of an
/// integer number. To do this you have to allocate a c-string buffer. Use it
/// with caution!
/// Try to avoid doing this and real programs and use to_string method insted.
/// Train yourself)
///
/// 3) Use the operator+ semantics of the std::string object to concatenate few
/// strings into one big string. See how expensive it is! We obviously need to
/// find some more efficient way to do this. See next problem in the current set
/// describing a possible approach.
///
////////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <string>
#include <sstream>

using std::string;

int main()
{
    string example = "123dsfhsdfh";
    int number;
    number = std::stoi(example);
    std::cout << number + 321 << '\n';
    

    // 123 as int
    string fromNumber = std::to_string(123);
    // 123 as string
    fromNumber = fromNumber + "1111";
    // 1231111 as string
    fromNumber = fromNumber + "1111";
    fromNumber = fromNumber + "1111";
    fromNumber = fromNumber + "1111";
    
    // [ #### ] [ #### ]
    // [ ####  #### ]
    // [ ####  ####  #### ]
    // [ ####  ####  ####  #### ]
    // [ ####  ####  ####  ####  #### ]
    
    
    // [ #### ] << [ #### ] << [ #### ]
    // [ ####  ####  ####  ####  #### ]
    
    
    std::stringstream sstr(fromNumber);
    // 1231111 as stringstream
    
    int number2;
    sstr >> number2;
    // 1231111 as int
    
    // 1231432 as int
    std::cout << number2 + 321 << '\n';
    
    
    return 0;
}

