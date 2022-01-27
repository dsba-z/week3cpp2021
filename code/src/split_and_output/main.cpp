////////////////////////////////////////////////////////////////////////////////
/// \file
/// \brief      Main module for Problem 5: Split and output.
/// \author     Georgii Zhulikov
/// \version    0.1.0
/// \date       25.01.2021
///             This code is for educational purposes of the course "Introduction
///             to programming" provided by the Faculty of Computer Science
///             at the Higher School of Economics.
///
/// Create a function that takes a string and a delimiter as input, splits the
/// string into parts separated by the delimiter and prints the parts into
/// output, without returning anything.
/// 
////////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <string>
#include <sstream>
#include <vector>

void splitAndOutput(const std::string& str, char delimiter)
{
    std::vector<std::string> otpt2;
    std::stringstream sstr(str);
    std::string line;
    while (std::getline(sstr, line, delimiter))
    {
        
    }
    
    std::string otpt[2000];
    std::string current = "";
    int j = 0;
    for (int i = 0; i < str.size(); ++i) // parse input
    {
        if (str[i] == delimiter)
        {
//            otpt2.push_back(current);
            otpt[j] = current;
            ++j;
            current = "";
        }
        else
        {
            current = current + str[i];
            if (i == str.size() - 1)
            {
                otpt[j] = current;
                ++j;
            }
        }
    }


    for (int i = 0; i <= j; ++i)
    {
        //v.append(otpt[i])
//        v.push_back(otpt[i]);
        std::cout << otpt[i] << std::endl;
    }
}


int main()
{
    using std::cout;
    using std::cin;

    std::string inpt = "";
    char delim;
    cin >> inpt;
    cin >> delim;
    splitAndOutput(inpt, delim);

    
    cout << "\n\n";
    return 0;
}
