#include <iostream>

int main()
{
    int array[10] = {0};
    int number = 2000;
    int age {50}; // address: 3000
    int* agePointer = &age; // pointer's address: 5000
    double* ptr = &number1;
    double number1 {5}, number2 {10};
    char character = 'a'; // assume: address = 2301
    char characterIndicator = &character; // assume: address = 6002

    std::cout << sizeof(number) << '\n'; // size of int = 4
    std::cout << number << '\n'; // variable value = 2000
    std::cout << &number << '\n'; // variable address

    int* pointer = &number;

    std::cout << sizeof(pointer) << '\n';
    std::cout << pointer << '\n'; // = std::cout << &number << '\n';
    std::cout << pointer << '\n'; // std::cout << number << '\n';
    // a pointer is variable containing address of other variable
    std::cout << ptr << '\n';
    ptr = &number2;
    std::cout << "Value: " <<ptr << '\n';
    std::cout << "Address: " << ptr << '\n';
    std::cout << &age << '\n'; // 3000
    std::cout << age << '\n'; // 50
    std::cout << agePointer << '\n'; // 50
    std::cout << &agePointer << '\n'; // 5000
    std::cout << agePointer << '\n'; // 3000
    std::cout << character << '\n'; // a, 97
    std::cout << characterIndicator << '\n'; // 2301
    std::cout << *characterIndicator << '\n'; // 'a', 97
    std::cout << &characterIndicator << '\n'; // 6002
    std::cout << &character << '\n'; // 2301
    return 0;
}
