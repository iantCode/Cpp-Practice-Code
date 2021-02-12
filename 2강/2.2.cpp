#include <iostream>
#include <cmath>
#include <limits>

int main(void)
{
    short s = 1;
    int i = 1;
    long l = 1;
    long long ll = 1;

    std::cout << sizeof(short) << std::endl;        //제 시스템에서는 출력은 2
    std::cout << sizeof(int) << std::endl;          //제 시스템에서는 출력은 4
    std::cout << sizeof(long) << std::endl;         //제 시스템에서는 출력은 8
    std::cout << sizeof(long long) << std::endl;    //제 시스템에서는 출력은 8

    std::cout << std::pow(2, sizeof(short) * 8 - 1) - 1 << std::endl; //short 최대값 출력하기
    std::cout << std::numeric_limits<short>::max() << std::endl;      //limits.h에 저장된 short 최댓값 출력
    std::cout << std::numeric_limits<short>::min() << std::endl;      //limits.h에 저장된 short 최솟값 출력
    std::cout << std::numeric_limits<short>::lowest() << std::endl;   //limits.h에 저장된 short 최솟값 출력

    s = 32767;
    s = s + 1; //32768
    std::cout << s << std::endl; //-32768이 출력됨. (오버플로우)

    s = std::numeric_limits<short>::min();
    s = s - 1; //-32769
    std::cout << s << std::endl; //32767 (오버플로우)

    unsigned short us = -1; //65535로 변환됨.
    std::cout << us << std::endl;

    i = 123 / 7;
    std::cout << i << std::endl; //17로 출력됨.

    return 0;
}