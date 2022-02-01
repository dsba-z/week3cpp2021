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
using namespace std;
// TODO: Implement splitAndOutput() method here.
void splitAndOutput(const std::string& str, char delimiter){
    stringstream sstr;
    sstr << str;
    string word;
    while(std::getline(sstr,word,delimiter)){
      cout << word << endl;
    }

}

int main()
{
    char delimetre = ',';
    string words;
    std::getline(cin,words);
    cin >> delimetre;
    splitAndOutput(words,delimetre);
}
//int main2()
//{
    
//    string words;
//    cin >> words;
//    string word;
//    stringstream sstr;
//    sstr << words;
//    char comma = ',';
//    while(std::getline(sstr,word,comma)){
//      cout << word << endl;
//    }
//}
//int main()
//{
//    using std::cout;
//    using std::cin;


//    // TODO: Check if the function splitAndOutput works correctly
//    // Input a string with characters separated by a delimiter
//    // Input the delimiter character
//    // Call splitAndOutput
    
//    // input:
//    // 1,2,4,2335.646,asasf,+++
//    // ,
    
//    // output:
//    // 1
//    // 2
//    // 4
//    // 2335.646
//    // asasf
//    // +++
//    std::string s;
//    char delim;
//    std::getline(cin, s);
//    std::cin >> delim;
//    splitAndOutput(s, delim);
//    cout << "\n\n";
//    return 0;
//}
