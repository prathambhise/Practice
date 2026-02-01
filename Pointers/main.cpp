#include <iostream>

int main() {
    int a = 10;
    int *myptr = &a;

    std::cout << a << ": " << sizeof(a) << std::endl;
    std::cout << &a << std::endl;
    std::cout << myptr << std::endl;
    std::cout << *myptr << std::endl;

    *myptr = 20;
    std::cout << a << std::endl;

    int arr[10];
    std::cout << &arr[0] << std::endl;
    std::cout << &arr[1] << std::endl;
    std::cout << &arr[2] << std::endl;
    std::cout << &arr[3] << std::endl;
    std::cout << &arr[4] << std::endl;

    int *ptr = arr;
    std::cout << ptr << std::endl;

    return 0;

}
