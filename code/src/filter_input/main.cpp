////////////////////////////////////////////////////////////////////////////////
/// \file
/// \brief      Main module for a Problem: Read Unknown number of numbers and
///             filter output
/// \author     Sergey Shershakov
/// \version    0.1.0
/// \date       22.01.2022
///             This code is for educational purposes of the course "Introduction
///             to programming" provided by the Faculty of Computer Science
///             at the Higher School of Economics.
///
/// TASK DESCRIPTION
///
/// A program reads from the standard input (cin) a set of real numbers, whose
/// count is not known in advance. The program filters the input, namely outputs
/// to the standard output (cout) positive numbers only.
///
/// After implementing the task try to reassign the input stream to a text file
/// using one that can be found in /data/filter_input/input.txt (as an example).
///
////////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <fstream>

using std::cin;
using std::cout;
using std::endl;


int main()
{
    double x;
    
    std::ifstream inFile("inp2t.txt");
    
    if (!inFile.is_open()) {
        std::cout << "Unable to open file" << std::endl;
        return 1;
    }
    
    while (inFile >> x) {

        if (x >= 0) {
            cout << x << endl;
        }
    }
    inFile.close();

    return 0;
}
