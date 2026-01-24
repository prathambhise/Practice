#include <iostream>

int main() {
    char text[10] = "Hello!!!";
    char p[2];
    p[0] = 'h';
    p[1] = 'i';
    // arrary index out of range can 
    // be accessed with garbage value
   
    std::string s = "abc";
    std::string s2("Hello friends");

    std::cout << text << std::endl;
    std::cout << p << std::endl;
    std::cout << s << " length: " << s.length() << std::endl;
    if (s != text) {
        std::cout << s[0] << std::endl;
    }
    std::cout << s.at(2) << std::endl;
    std::cout << s2 << std::endl;

    return 0;
}
