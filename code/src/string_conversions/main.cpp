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
    string numberAsString = "101";
    int numberInt = std::stoi(numberAsString);
    double numberDouble = std::stod(numberAsString);
    
    numberInt *= 2;
//    numberInt = numberInt * 2;
    
    numberDouble *= 2;
    
    string fromNumbers = std::to_string(numberInt);
    string fromNumbers2 = std::to_string(numberDouble);
    
    string together = fromNumbers2 + fromNumbers;
    
    std::cout << together << "\n";
    
    /////////////////////////
    
    
    // 123 as string
    string s = "123";
    std::stringstream sstr(s);
    

    
    int a, b, c;
    
    // 123 as number
    // cin >> n;
    sstr >> a >> b >> c;
    std::cout << a << "\n";
    
    
    
    
    
    std::stringstream sstr2;
    // 1.0104225 as number
    double numberToStream = 1.0104225;
    
    sstr2 << numberToStream;
    
    string buffer;
    // 1.0104225 as string
    sstr2 >> buffer;
    std::cout << buffer << "\n";
    
    
    return 0;
}
