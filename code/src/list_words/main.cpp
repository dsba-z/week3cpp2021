////////////////////////////////////////////////////////////////////////////////
/// \file
/// \brief      Main module for Problem 3: List words.
/// \author     Georgii Zhulikov
/// \author     Sergey Shershakov
/// \version    0.1.0
/// \date       25.01.2021
///             This code is for educational purposes of the course "Introduction
///             to programming" provided by the Faculty of Computer Science
///             at the Higher School of Economics.
///
/// Reads a string containing spaces and outputs individual words of the string
/// one word per a line.
///
////////////////////////////////////////////////////////////////////////////////


#include <iostream>
#include <string>
#include <sstream>

int main()
{
    using std::cout;
    using std::cin;
    
    

    
    std::string line;
    std::getline(cin, line);
    
    std::stringstream sstr(line);
    
   
    std::string word;
    
//    thing in A
//    thing
//    for (int i = 0; i < A.size(); ++i) {
//        if (thing == A[i]) {
//            found
//        }
//    }
    std::string a = "123";
    a[1] == ' ';
    while (std::getline(cin, line, ' ')) {

        std::stringstream sstr(line);
        while (sstr >> word) {
            cout << word << std::endl;
        }
    }
    
    
    
    while (cin >> word) {
        cout << word << std::endl;
    }

    
    // TASK 3:
    // input:
    // long list of words
    // more words
    
    // output:
    // long
    // list
    // of
    // words
    // =====
    // more
    // words
    
    

    // TODO: provide your implementation here as 2 variants:
    // 1) a straightforward approach
    // 2) an approach using stringstream
    
    
    cout << "\n\n";
    return 0;
}
