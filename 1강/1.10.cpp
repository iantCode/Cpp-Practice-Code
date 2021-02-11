#include <iostream>

int add(int a, int b)
{
    return a + b;
}
int subtract(int a, int b); //forward declaration
int multiply(int, int);


int main()
{
    std::cout << add(1, 2) <<std::endl;
    std::cout << subtract(2, 1) <<std::endl;
    std::cout << multiply(2, 3) <<std::endl;

    return 0;
}

int subtract(int a, int b)
{
    return a - b;
}

int multiply(int a, int b)
{
    return a * b;
}