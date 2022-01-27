////////////////////////////////////////////////////////////////////////////////
/// \file
/// \brief      Main module for Problem 7: Read from stream.
/// \author     Georgii Zhulikov
/// \author     Sergey Shershakov
/// \version    0.1.0
/// \date       25.01.2021
///             This code is for educational purposes of the course "Introduction
///             to programming" provided by the Faculty of Computer Science
///             at the Higher School of Economics.
///
/// 1) Create a function called calcSumFromStream() that obtains an input stream
/// object (given by reference) istream&, reads floating point numbers from it
/// until the end of line, sums them and returns the result by value.
/// Put the definition of the method below main(), use a prototype for declaring it.
/// 
////////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <string>
#include <cstring>
#include <vector>
#include <sstream>

double calcSumFromStream(std::istream& in);

int main()
{
    using namespace std;
    // TODO: Implement the main method here.
    double totalSum = calcSumFromStream(cin);
    std::cout << totalSum << "\n";
    return 0;
}

// TODO: Implement calcSumFromStream() method here.
double calcSumFromStream(std::istream& in)
{
    double a = 0;
    std::string line;
    std::getline(in, line);
    double newNumber;
    std::stringstream sstr(line);
    
    while (sstr >> newNumber) {
        a += newNumber;
    }
    return a;
}
