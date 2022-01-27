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

// name\nsecond_name\n
//#include <iostream>
//#include <string>



#include <iostream>

int main()
{
    int i = 0;
    std::string line, name, second_name;
    std::getline(std::cin, line);
    while (line[i] != ' ')
    {
        name += line[i];
        i += 1;
    }
    i += 1;
    while (line[i] != '\0')
    {
        second_name += line[i];
        i += 1;
    }
    std::cout << second_name << "," << " " << name;
    return 0;
}
