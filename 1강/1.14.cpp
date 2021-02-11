#include <iostream>
#define MY_NUMBER 9 //매크로는 보통 대문자로만 쓴다.
#define MAX(a, b) (((a) > (b)) ? (a) : (b)) //매크로로 함수 작성은 가능하긴 하다.
//#define은 한 파일 안에서만 적용된다.

int main()
{
    std::cout << MY_NUMBER << std::endl;
    std::cout << MY_NUMBER + MY_NUMBER << std::endl;
    std::cout << MAX(99 * 2, 199) << std::endl;

#ifdef MY_NUMBER //MY_NUMBER가 정의되어 있다면
    std::cout << "My number is defined." << std::endl;
#endif

#ifndef MY_NUMBER //MY_NUMBER가 정의되어 있지 않다면
    std::cout << "My number is not defined." << std::endl; //정의되어 있으므로 흐린 글자로 표시된다.
#endif

    return 0;
}