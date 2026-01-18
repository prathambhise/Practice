#include <iostream>

void myfunction(int &x) {
    x++;
    std::cout<< x << std::endl;
}

int main(){
    int a = 10;
    myfunction(a);
    std::cout<< a << std::endl;

    // Aliases

    int i1 = 10;
    int &j1 = i1;

    std::cout<< i1 << std::endl;
    j1 += 90;
    std::cout<< j1 << std::endl;
    
    return 0;
}