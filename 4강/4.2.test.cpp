#include <iostream>
#include "4.2.constants.h"

extern int a = 123;  //초기화해야만 4.2.cpp 파일에서 불러올 수 있다.

void doSomething()
{
    std::cout << "Hello " << std::endl;
    std::cout << Constants::pi << std::endl;
}