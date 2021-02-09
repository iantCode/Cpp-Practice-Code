#include <iostream>

int addTwoNumbers(int a, int b)
{
    return a + b;
}

void printNumber(int x)
{
    std::cout << x << std::endl;

    return;

    std::cout << x << std::endl; //는 실행되지 않음.
}

int main(void)
{
    std::cout << addTwoNumbers(1, 2) << std::endl;
    std::cout << addTwoNumbers(3, 4) << std::endl;
    std::cout << addTwoNumbers(5, 6) << std::endl;

    printNumber(10);

    return 0;
}