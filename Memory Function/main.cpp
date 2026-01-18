#include <iostream>

void myfunction() {
    int x = 0;
    static int p = 0;
    x++;
    p++;
    std::cout<< "x: " << x << std::endl;
    std::cout<< "p: " << p << std::endl;
}

int main() {
    myfunction();
    //
    myfunction();
    //
    myfunction();
    //
    myfunction();
    //
    return 0;
}
