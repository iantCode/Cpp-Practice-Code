#include <iostream>

// template 으로 리턴값을 다양하게 바꿀 수 있다.

auto add(const int a, const int b)    //함수명에서도 auto로 처리할 수 있다.
{
    return a + b;
}

//auto add(auto a, auto b) //는 사용이 불가능하다.

int main()
{
    auto a = 123;      //자동으로 int로 판단함.
    //auto b;          //초기화가 없다면 사용할 수 없음.
    auto c = 123.0;    //자동으로 double로 판단함.
    auto d = 1 + 2.0f; //자동으로 float로 판단함

    auto result = add(1, 2);  //함수의 리턴값도 auto로 수정할 수 있다.
}