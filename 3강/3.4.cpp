#include <iostream>

int main()
{
    using namespace std;

    //sizeof 연산자

    float a;

    sizeof(float);
    sizeof(a);
    sizeof a; //이렇게 작성하는 것도 가능함.

    // , 연산자

    int x = 3;            //4
    int y = 10;           //11
    int z = (++x, ++y);   //11

    // , 연산자는 뒤의 것을 값으로 가진다.

    int a = 1, b = 2;     //Seperator
    z = a, b;             //(z = 1), 2 // , 는 = 보다 우선순위가 낮다.

    //conditional operator (arithmetric if)

    int p = (5 > 3) ? 1 : 0;
    /*
        if (5 > 3)
            int p = 1
        else
            int p = 0
    */

    cout << ((x % 2 == 0) ? "even" : "odd") << endl; //()로 싸줘야 한다. 비트 연산자(<<, >>)가 ?: 보다 연산 순서가 빠르기 때문.

    return 0;
}