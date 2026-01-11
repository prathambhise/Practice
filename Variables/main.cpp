#include <iostream>
#include <limits.h>
#include <string>

int main() {

    // Nemerical Data Types
    int x = 10;
    std::cout << "Integer (int): " << sizeof(int) << std::endl;
    short y = 20;
    std::cout << "Short Integer (short int): " << sizeof(y) << std::endl;
    long z = 20;
    std::cout << "Long Integer (long int): " << sizeof(z) << std::endl;
    std::cout << "Long (long long): " << sizeof(long long) << std::endl;
    std::cout << "Float (float): " << sizeof(float) << std::endl; // 7 digits
    std::cout << "Double (double): " << sizeof(double) << std::endl; // 15 digits
    std::cout << "Long Double (double): " << sizeof(long double) << std::endl; 
    
    //16 bit -> 1111 1111 1111 1111 (decimal-> 65535)
    // signed short - default
    unsigned short a = 65535;
    std::cout<< a << std::endl;

    //Max and Min allowed
    std::cout << INT_MAX << std::endl;
    std::cout << INT_MIN << std::endl;
    std::cout << UINT_MAX << std::endl;
    std::cout << SHRT_MAX << std::endl;
    // std::cout << LONG_LONG_MAX << std::endl; // no error

    //warning: large integer implicitly truncated to unsigned type [-Woverflow]
    // a = 65537;
    // std::cout<< a << std::endl;

    // Textual Data types
    char p = 'a';
    std::cout << p << std::endl;
    std::cout << sizeof(char) << std::endl;

    std::string q = "Hello world!";
    std::cout << q << std::endl;
    std::cout << sizeof(q) << std::endl;

    // Boolean
    std:: cout << sizeof(bool) << std::endl;

    bool u = true;
    std::cout << u << std::endl;
    
    u = false;
    std::cout << u << std::endl;
    
    return 0;
}

