#include <iostream>

int main() {
    char text[10] = "Hello!!!";
    char p[3];
    p[0] = 'h';
    p[1] = 'i';
    std::cout << text << std::endl;
    std::cout << p << std::endl;
    std::string s = "abc";
    std::cout << s << "length: " << s.length() << std::endl;
    if (s < text) {
        std::cout << s.at(2) << std::endl;
    }

    return 0;
}
