#include <iostream>
#include <typeinfo>

enum Color    //열거형
{
    COLOR_BLACK,
    //COLOR_BLACK = -3,  //이렇게도 사용이 가능하다.
    COLOR_RED,
    COLOR_BLUE,
    COLOR_GREEN,    // 맨 마지막 항목에 , 붙여도 큰 상관이 없음.
};    //; 필수로 붙여야 함!

//수동으로 같은 숫자에 할당할 수는 있지만 충돌이 일어날 가능성이 높다.

int computeDamage(const int weapon_id)
{
    if (weapon_id == 0)
    {
        return 1;
    }

    if (weapon_id == 1)
    {
        return 2;
    }
    //...
    return 0;
}

int main()
{
    Color paint = COLOR_BLACK;
    Color house(COLOR_BLUE);
    Color apple{ COLOR_RED };

    Color my_color = COLOR_BLACK;

    int color_id = COLOR_RED;
    //Color my_color = color_id;    //int to enum 은 불가능함.
    Color my_color = static_cast<Color>(3);

    //cin >> my_color 열거형을 입력받는 것은 불가능하다.

    std::cout << my_color << std::endl;

    return 0;
}