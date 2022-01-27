////////////////////////////////////////////////////////////////////////////////
/// \file
/// \brief      Main module for Problem 4: Type conversion.
/// \author     Georgii Zhulikov
/// \version    0.1.0
/// \date       25.01.2021
///             This code is for educational purposes of the course "Introduction
///             to programming" provided by the Faculty of Computer Science
///             at the Higher School of Economics.
///
/// Create a program that performs the following steps:
/// 1. Reads three integer numbers from input.
/// 2. Multiplies each number by 2.
/// 3. Concatenates the (string representations of the numeric) results into a
///     single large number (string representation).
/// 4. Multiplies the result by 2.
/// 5. Outputs the resulting number.
/// 
/// Use stringstream for type converstion between numbers and strings.
/// (Additional) Use a debugger to check that at each step the strings and
/// numbers hold the correct values.
///
////////////////////////////////////////////////////////////////////////////////


#include <iostream>
#include <string>

using std::string;
using std::to_string;

int main()
{
    int intNumber1;
    int intNumber2;
    int intNumber3;

    std::cin >> intNumber1 >> intNumber2 >> intNumber3;

    intNumber1 *= 2;
    intNumber2 *= 2;
    intNumber3 *= 2;

    string strNumber1 = to_string(intNumber1);
    string strNumber2 = to_string(intNumber2);
    string strNumber3 = to_string(intNumber3);

    string strComplexNumber = strNumber1 + strNumber2 + strNumber3;

    double doubleComplexNumber = std::stod(strComplexNumber);
    
    doubleComplexNumber *= 2;
    
    std::cout << doubleComplexNumber;

    return 0;
}
