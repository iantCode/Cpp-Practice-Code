#include <iostream>
#include "2.9.my_constants.h" // 상수를 한 곳에 몰아둔 헤더 파일을 불러온다.
//#define PRICE_PER_ITEM 30    //C++에는 매크로를 보통 사용하지 않는다.
//따라서 보통은 const 변수를 사용한다.

void printNumber(const int my_number) //입력한 변수를 수정할 수 없도록 하기 위해 인자에 const를 붙이기도 함.
{
    std::cout << my_number << std::endl;
}


int main(void)
{
    using namespace std;

    const double gravity{ 9.8 }; //컴파일 할 때 결정된다.
    double const pi(3.14); //const는 일반적으로 어디에 붙여도 상관은 없으나 보통 앞에 붙인다.
    //gravity = 1.2; //const 변수는 수정할 수 없다.
    //const double constVar; //const 변수는 반드시 초기화를 해야 한다.

    int number;
    cin >> number;

    const int special_number(number); //number는 고정된 숫자가 아니기 때문에 런타임(run time)에 결정된다.
    printNumber(special_number);

    constexpr int my_const = 123; //constexpr는 컴파일할 때 결정되도록 보장한다.
    //constexpr int my_const(number); //constexpr는 런타임에 결정되지 않도록 하기 때문에 에러가 발생한다.

    cout << constants::pi << endl; //Header 파일에 const 변수를 정의하고 사용하기

    return 0;
}