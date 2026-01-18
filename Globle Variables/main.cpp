#include <iostream>
#include "includes/myfile.h"

int x = 100;
static int z = 35;
extern std::string message;

int main() {

    add_x(75);
    std::cout<< message <<std::endl;
    std::cout<< z <<std::endl;
    return 0;

}
