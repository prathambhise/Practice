#include <iostream>

// function declairation

void print();
int add(int, int);
int add(int, int, int);
void my_div(float, float = 2.0);

int main() {

    // function call

    print();
    add(5, 7);
    add(5, 7, 3);
    my_div(5.0);
    my_div(10.0, 3.0);
    my_div(3.0);

    return 0;
}

// function definition

void print() {
    std::cout << "Hello world!" << std::endl;
}

// function overloading

int add(int a, int b) {
    std::cout << a + b << std::endl;
    return a + b;
}

int add(int x, int y, int z) {
    std::cout << x + y + z << std::endl;
    return x + y + z;
}

void my_div(float p, float q) {
    std::cout << "div: ";
    std::cout << p / q << std::endl;
}
