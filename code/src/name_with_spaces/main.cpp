////////////////////////////////////////////////////////////////////////////////
/// \file
/// \brief      Main module for a Problem: Name with spaces.
/// \author     Georgii Zhulikov
/// \author     Sergey Shershakov
/// \version    0.1.0
/// \date       25.01.2021
///             This code is for educational purposes of the course "Introduction
///             to programming" provided by the Faculty of Computer Science
///             at the Higher School of Economics.
///
/// Modify problem “name”, so it allows a user to input a complex name that
/// consists of more than 1 word (separated by spaces).
///
////////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <string>

using std::cin;
using std::cout;

int main()
{
    // std::getline(cin, line);
    std::string line;
    while (std::getline(cin, line)) {
        cout << line.size() << std::endl;
    }
    return 0;

}

   
