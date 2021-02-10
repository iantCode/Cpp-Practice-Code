#include <iostream>

int main()
{
    int x(0); //초기화를 이렇게 할 수도 있다. == int x = 0;

    std::cout << x << " " << &x << std::endl; //출력 : 0 0x7fffffffddc0

    {
        int x = 1; //새 영역 안에서는 같은 이름의 새 변수를 선언할 수 있다.

        std::cout << x << " " << &x << std::endl; //출력 : 1 0x7fffffffddc4
    }

    {
        x = 2; //새 영역 안에서는 같은 이름의 새 변수를 선언할 수 있다.

        std::cout << x << " " << &x << std::endl; //출력 : 2 0x7fffffffddc0
    }

    std::cout << x << " " << &x << std::endl; //출력 : 2 0x7fffffffddc0

    return 0;
}