////////////////////////////////////////////////////////////////////////////////
/// \file
/// \brief      Main module for Problem 8: Files.
/// \author     Georgii Zhulikov
/// \author     Sergey Shershakov
/// \version    0.1.1
/// \date       25.01.2021
///             This code is for educational purposes of the course
///             "Introduction to programming" provided by the Faculty of
///             Computer Science at the Higher School of Economics.
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

#include <fstream>
#include <iostream>
#include <sstream>
#include <string>

double calcSumFromStream(std::istream& in);

void sumLines(std::istream& in, std::ostream& out)
{
    while (in)
    {
        out << calcSumFromStream(in) << std::endl;
        // crash the program
    }
}

int main()
{
    //  windows version:
    //  std::ifstream inFile("..\\..\\data\\problem8_files\\inp.txt");

    int a; // from -2^31 to 2^31
    unsigned int b; // from 0 to 2^32
    
    // on 64 bit:
    long aa; // from -2^63 to 2^63
    unsigned long bb; // from 0 to 2^64
    size_t bbb; // from 0 to 2^64
    
    
    std::ifstream inFile1;
    inFile1.open("../../data/problem8_files/inp.txt");
    inFile1.close();

    std::ifstream inFile("../../../data/problem8_files/inp.txt");
    if (!inFile.is_open())
    {
        std::cout << "Unable to open input file\n";
        return 1;
    }
    std::ofstream outFile("../../../data/problem8_files/my_out.txt");
    if (!outFile.is_open())
    {
        std::cout << "Unable to open output file\n";
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
    double a = 0;
    std::string line;
    std::getline(in, line);
    double newNumber;
    std::stringstream sstr(line);

    while (sstr >> newNumber)
    {
        a += newNumber;
    }
    return a;
}
