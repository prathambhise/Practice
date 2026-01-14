#include <iostream>

int main() {

    float n1, n2;
    char op;

    std::cout << "Enter number 1: ";
    std::cin >> n1;
    std::cout << "Choose arithmatic operator: ";
    std::cin >> op;
    std::cout << "Enter number 2: ";
    std::cin >> n2;

    switch(op) {
        case '+':
            std::cout << n1 + n2 << std::endl;
            break;
        case '-':
            std::cout << n1 - n2 << std::endl;
            break;
        case '*':
            std::cout << n1 * n2 << std::endl;
            break;
        case '/':
            std::cout << n1 / n2 << std::endl;
            break;
        case '%':
            std::cout << (int) n1 % (int) n2 << std::endl;
            break;
        default:
            std::cout << "Only +, -, *, /, % oprators supported." << std::endl;
    }

    return 0;
    
}