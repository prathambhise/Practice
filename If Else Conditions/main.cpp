#include <iostream>

int main(){

    int a, b;
    std::cin >> a;

    if (a > 100){
        std::cout << "Your number is greater than 100." << std::endl;
    } else {
        if (a > 50){
            std::cout << "Your number is greater than 50." << std::endl;
        } else {
            std::cout << "Your number is not grater than 50." << std::endl;
        }
    }

    std::cin >> b;
    if (a == b){
        std::cout << "A & B are equal." << std::endl;
    } else if (a > b){
        std::cout << "A > B." << std::endl;
    } else {
        std::cout << "A < B." << std::endl;
    }
    return 0;

}
