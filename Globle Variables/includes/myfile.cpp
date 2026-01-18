#include <iostream>

std::string message = "Hello World!";
extern int x;

void add_x(int y) {
    std::cout<< x + y <<std::endl;
}
