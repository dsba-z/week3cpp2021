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
int main()
{
    std::string exString = "1000.6";
    int exInt = std::stoi(exString);
    double exDouble = std::stod(exString);
    
    std::cout << exInt * 2 << "\n";
    std::cout << exDouble * 2 << "\n";
    
    
    int exInt2 = 50;
    double exDouble2 = 50.125215;
    std::string exStringInt = std::to_string(exInt2);
    std::string exStringDouble = std::to_string(exDouble2);
    
    std::string together = exStringDouble + exStringInt;
    together = together + exStringInt;
    together = together + exStringInt;
    together = together + exStringInt;
    together = together + exStringInt;
    together = together + exStringInt;
    together = together + exStringInt;
    
    // [ #### ] + [ #### ] + [ ###### ]
    // [ ####  #### ]
    // [ ####  ####  ###### ]
    // [ ####  ####  ######  ###### ]
    // [ ####  ####  ######  ######  ###### ]
    
    
    // [ #### ] << [ #### ] << [ ###### ]
    // [ ####  ####  ######  ###### ]

    std::cout << together << "\n";
    
    ////////////////////////
    
    
    std::string line = "1000.6";
//    std::stringstream sstr(line);
//    std::stringstream sstr("1000.6");
    
    std::stringstream sstr;
    sstr << line;
    
    std::string fullBuffer = sstr.str();
    double number;
    sstr >> number;
    std::cout << number * 3 << "\n";
    
    
    
    
    std::stringstream sstr2;
    
    double number2 = 963.21512;
    sstr2 << number2;
    
    std::string buffer;
    sstr2 >> buffer;
    
    std::cout << buffer + "___" << "\n";
    
    sstr2.clear();
    sstr2 << "124";
    sstr2 >> buffer;
    std::cout << buffer + "___" << "\n";
    
    return 0;
}
