////////////////////////////////////////////////////////////////////////////////
/// \file
/// \brief      Main module for Problem 8: Files.
/// \author     Georgii Zhulikov
/// \author     Sergey Shershakov
/// \version    0.1.1
/// \date       25.01.2021
///             This code is for educational purposes of the course "Introduction
///             to programming" provided by the Faculty of Computer Science
///             at the Higher School of Economics.
///
/// 1) Create a function called sumLines() that obtains an input stream
/// object (given by reference) istream&, reads float numbers from it line by
/// line and sums up numbers from each line. The result is output to a given
/// output stream (given by reference) ostream&.
///
/// Reuse function calcSumFromStream() developed in ex.7 to deal with individual
/// lines!
///
/// In the main program provide two different file stream (both text files) to
/// read from and output to data, correspondingly.
/// http://www.cplusplus.com/doc/tutorial/files/
/// 
////////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <sstream>
#include <fstream>
#include <string>

double calcSumFromStream(std::istream& in);

void sumLines(std::istream& in, std::ostream& out)
{
    while (in)
    {
        std::cout << calcSumFromStream(in) << "\n";
    }
}

int main()
{
    // Windows:
    // std::ifstream inFile("..\\..\\data\\problem8_files\\inp.txt");
    // C:\\Program Files\\QT\\...
    
    std::ifstream inFile("../../../data/problem8_files/inp.txt");
    if (!inFile.is_open()) {
        std::cout << "Unable to open input file" << std::endl;
        return 1;
    }
    
    std::ofstream outFile("../../data/problem8_files/my_out.txt");
    if (!outFile.is_open()) {
        std::cout << "Unable to open output file" << std::endl;
        return 1;
    }
    
    sumLines(inFile, outFile);
    inFile.close();
    outFile.close();
    return 0;
}

// TODO: Implement calcSumFromStream() method here.
double calcSumFromStream(std::istream& in)
{
    double total = 0;
    std::string line;
    std::getline(in, line);
    
    std::stringstream sstr(line);
    double number;
    while (sstr >> number) {
        total += number;
    }
    return total;
}

