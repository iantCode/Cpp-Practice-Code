#include <iostream>
#include "4.2.constants.h"

int value = 123; // 전역변수 (정적변수처럼 활용도 가능하다.)

/*
    int a = 1;
    void doSomething()
    {
        ++a;
        std::cout << a << std::endl;
    }
*/

//internal linkage (해당 파일에서만 접근 가능한 변수)
static int g_a = 1; //internal linkage

//external linkage (외부 파일에서도 접근 가능한 변수)

/*
    void doSomething()
    {
        static int a = 1; // 정적변수 (메모리가 static이다.) (두번째 사용부터는 없는 줄 취급한다.)
        // 정적 변수는 함수 외부에서 접근하기 매우 힘들다
        ++a;
        std::cout << a << std::endl;
    }
*/

// Forward Declaration
extern void doSomething(); //extern 은 생략 가능
extern int a;

int main()
{
    std::cout << value << std::endl;

    int value = 1;

    std::cout << ::value << std::endl; //외부에 정의된 변수 접근하기
    std::cout << value << std::endl;

    doSomething();
    doSomething();

    std::cout << Constants::pi << std::endl;

    return 0;
}

/*
    정리

    int g_x; // external linkage
    static int g_x // internal linkage
    const int g_x // 불가능 (초기화가 되어있지 않아 사용이 불가능)

    extern int g_z;
    extern const int g_z;

    int g_y(1);
    static int g_y(1); // internal linkage
    const int g_y(1);

    extern int g_w(1); // 외부에서 접근 가능한 변수
    extern const int g_w(1); // 외부에서 접근 가능한 상수
*/