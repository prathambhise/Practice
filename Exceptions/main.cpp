#include <iostream>

float get_divide(float a, float b) {
    float c = 0;
    if(b == 0){
        throw 111;
    } else {
        c = a / b;
        return c;
    }
}

int main() {
    float x, y, z;
    std::cout << "Enter x: ";
    std::cin  >> x;
    std::cout << "Enter y: ";
    std::cin >> y;
    // x = 15;
    // y = 0;
    try{
        z = get_divide(x, y);
        std::cout << z << std::endl;
    } catch(int e) {
        if(e = 111){
            std::cout << "division by zero is undefined." << std::endl;
        }
    }
}
