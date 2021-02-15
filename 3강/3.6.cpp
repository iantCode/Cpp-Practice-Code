#include <iostream>

int main()
{
    using namespace std;
    bool a = true;
    bool b = false;

    //logical NOT
    !b; // not 연산자

    //logical AND
    (a && b);

    //logical OR
    (a || b);

    //short circuit evalution
    int x = 1, y = 2;
    if (x == 1 && y++ == 2)
    {
        //do something
    }
    cout << y << endl; //y = 3;

    x = 2, y = 2;
    if (x == 1 && y++ == 2) // END operator는 앞 부분이 false면 뒷 부분은 수행되지 않는다.
    {
        //do something
    }
    cout << y << endl; //y = 2;

    // De Morgam's Law (드모르간 법칙)
    // !(x && y) == !x || !y
    // !(x || y) == !x && !y

    //logical XOR
    //다르면 True, 같으면 False
    //C++에는 없다.
    // if (x != y) 를 대신 사용한다.

    bool v1 = true;
    bool v2 = false;
    bool v3 = false;

    bool r1 = v1 || v2 && v3;    //는 r3와 같이 작동한다. (&&가 ||보다 우선순위가 높음.)
    bool r2 = (v1 || v2) && v3;
    bool r3 = v1 || (v2 && v3);

    return 0;
}