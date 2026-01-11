#include <iostream>

int main() {

    //Arithmatic operators
    int a = 10, b = 2;
    float c, d;

    std::cout << a + b << std::endl;
    std::cout << a - b << std::endl;
    std::cout << a * b << std::endl;
    std::cout << a / b << std::endl;
    std::cout << a % b << std::endl;

    c = 10 / 3;
    d = 10 % 3;
    std::cout << c << " " << d << std::endl;

    //Assignment operators
    int p, q, r;

    p = 5;
    p += 3;
    std::cout << p << std::endl;

    q = 10;
    std::cout << "increament, Decreament" << std::endl;
    std::cout << q << std::endl;
    std::cout << q++ << std::endl;
    std::cout << q << std::endl;
    std::cout << --q << std::endl;
    std::cout << q << std::endl;

    //Comparison operators
    p = 15, q =20;

    std::cout << (p == q) << std::endl;
    std::cout << (p != q) << std::endl;
    std::cout << (p > q) << std::endl;
    std::cout << (p < q) << std::endl;
    std::cout << (p <= q) << std::endl;
    std::cout << (p >= q) << std::endl;

    //Logical operators
    std::cout << ((5 > 3) && (3 < 7) )<< std::endl;
    std::cout << ((5 > 3) || (3 > 7) )<< std::endl;
    std::cout << (! (3 > 7) )<< std::endl;

    //Bitwise operators
 

    return 0;
}
