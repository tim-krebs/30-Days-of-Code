#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <sstream>



int main() {
    // Declare a variable named 'input_string' to hold our input.
    std::string input_string; 
    
    // Read a full line of input from stdin (cin) and save it to our variable, input_string.
    getline(std::cin, input_string); 
    
    // Print a string literal saying "Hello, World." to stdout using cout.
    std::cout << "Hello, World." << std::endl;

    // TODO: Write a line of code here that prints the contents of input_string to stdout.
    std::cout << input_string << std::endl;
    return 0;
}
