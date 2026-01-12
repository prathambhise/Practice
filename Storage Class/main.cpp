#include <iostream>

//extern int a;

int main() {

    static int a = 10;
    auto b = "Ten";
    std::string c = "Ben ";

    std::cout << a + 3 << std::endl;
    std::cout << c + b << std::endl;

    register int i = 5;
    std::cout << i << std::endl;

    // mutable 
    // thread_local // c++ 11

    return 0;
}