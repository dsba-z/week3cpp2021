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

// TODO: Implement splitAndOutput() method here.
void splitAndOutput(const std::string& str, char delimiter)
{

    // 123,125125,1,1.6,qsrfasf
    // ,
    
    // 123
    // 125125
    // 1
    // 1.6
    // qsrfasf
    
    std::vector<std::string> vectorOfStrings;
    
    std::string word;
    std::stringstream sstr(str);
    while (std::getline(sstr, word, delimiter)) {
        vectorOfStrings.push_back(word);
        std::cout << word << "\n";
    }
    
//    for (size_t i = 0; i < str.size(); ++i) {
//        if (str[i] == delimiter) {
//            // cout
//        }
//    }
    
    
}


int main()
{
    using std::cout;
    using std::cin;

    // TODO: Check if the function splitAndOutput works correctly
    // Input a string with characters separated by a delimiter
    // Input the delimiter character
    // Call splitAndOutput
    
    std::string buffer;
    char delimiter;
    cin >> buffer;
    cin >> delimiter;
    splitAndOutput(buffer, delimiter);
    
    cout << "\n\n";
    return 0;
}
