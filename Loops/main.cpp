#include <iostream>

int main() {

    int i;
    std::cin >> i;
    std::cout << std::endl;

    while (i > 3){
        std::cout << i-- << std::endl;
    }
    std::cout << i << std::endl;

    std::cout << "Next: " << std::endl;
    std::cin >> i;
    std::cout << std::endl;

    do {
        std::cout << i-- << std::endl;
    } while (i != 3);
    std::cout << i << std::endl;

    std::cout << "Next: " << std::endl;
    std::cin >> i;
    std::cout << std::endl;

    for (int j = i; j <= 10; j++) {
        std::cout << j << std::endl;
    }

    return 0;

}
