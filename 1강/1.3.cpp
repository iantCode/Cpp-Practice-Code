#include <iostream>

int main(void)
{
    int x = 123;      //x라는 정수형 변수를 선언했고 123이라는 데이터를 담았다. (초기화)
    x = 100;          //assignment (대입)

    std::cout << x << std::endl;
    std::cout << &x << std::endl; //&x는 메모리 공간의 주소를 나타낸다.

    x = 345;
    /* L-value는 주소값을 가지는 부분
    R-value는 메모리에 임시적으로 저장되는 부분
    위 코드에서 L-value는 x, R-value는 345이다. */

    x = x + 2; //여기서 x + 2의 x는 메모리에 값이 복사가 된다.

    return 0;
}