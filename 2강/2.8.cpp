#include <iostream>

int main()
{
    using namespace std;

    unsigned int ui = 1u; // 1u == (unsigned int) 1;
    long l = 5L;
    double d = 31400e-4;

    // Decimal : 0 1 2 3 4 5 6 7 8 9 10 11 (10진수)
    // Octal : 0 1 2 3 4 5 6 7 10 11 12 (8진수)
    // Hexa : 0 1 2 3 4 5 6 7 8 9 A B C D E F 10 11 (16진수)

    int x = 012; // 10진수로 10 (숫자 앞에 0을 넣으면 8진수)
    cout << x << endl;
    x = 0xA; // 10진수로 10 (숫자 앞에 0x를 넣으면 16진수)
    cout << x << endl;
    x = 0b1010; // 10진수로 10 (숫자 앞에 0b를 넣으면 2진수) (C++14 부터 가능함)
    cout << x << endl;
    x = 0b1010'1100'0010; // 긴 숫자에는 ' 를 붙일 수 있다. (컴파일러가 무시함)
    cout << x << endl;
    x = 196'258'112;
    cout << x << endl;

    return 0;
}