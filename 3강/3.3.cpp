#include <iostream>

int add(const int a, const int b)
{
    return a + b;
}

int main()
{
    using namespace std;

    int x = 5;
    int y = ++x; // int y = (++x);
    int z = x--; // int (z = x)--

    x = 6, y = 6;
    cout << x << " " << y << endl;
    cout << ++x << " " << --y << endl;
    cout << x-- << " " << y++ << endl; // 후위 연산자는 적용 타이밍이 다름.
    cout << x << " " << y << endl;

    cout << add(x, ++x) << endl; // 이렇게 코딩하지 말 것...
    x = x++; //이렇게 코딩하지 말 것... 이렇게 코딩하려면 x++ 만 쓰자.

    return 0;
}