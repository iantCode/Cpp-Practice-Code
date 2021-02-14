#include <iostream>

int main()
{
    using namespace std;

    int x = 3;
    int y = -x;    //단항 연산자는 붙여쓰는 것 추천
    y = 2;
    int z = x + y;
    z = x - y;
    z = x * y;
    z = x / y;
    z = x % y;    //나머지 연산자

    cout << x / y << " " << x % y << endl;

    double dx = 3.0;
    double dy = 2.0;

    cout << x / y << " " << dx / dy << endl;

    cout << -5 / 2 << endl; //출력 : -2 (소수점 이하 버림)
    cout << -5 % 2 << endl; //출력 : -1 (왼쪽에 있는 숫자의 부호를 따라감)

    x += y; //x = x + y;

    return 0;
}