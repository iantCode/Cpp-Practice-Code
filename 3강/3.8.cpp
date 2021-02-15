#include <iostream>
#include <bitset> //이진수로 출력하기 위해 사용함.

int main()
{
    using namespace std;

    // << Left Shift
    // >>
    // ~, &, |, ^ not, and, or, xor

    unsigned int a = 3;

    cout << std::bitset<4>(a) << endl;

    unsigned int b = a << 1; // 결과적으로 2의 제곱수를 곱하는 것.

    cout << std::bitset<4>(b) << " " << b << endl;

    cout << std::bitset<4>(a << 1) << " " << (a << 1) << endl;
    cout << std::bitset<4>(a << 2) << " " << (a << 2) << endl;
    cout << std::bitset<4>(a << 3) << " " << (a << 3) << endl;
    cout << std::bitset<4>(a << 4) << " " << (a << 4) << endl;

    a = 1024; // 결과적으로 2의 제곱수로 나누는 것

    cout << std::bitset<16>(a >> 1) << " " << (a >> 1) << endl;
    cout << std::bitset<16>(a >> 2) << " " << (a >> 2) << endl;
    cout << std::bitset<16>(a >> 3) << " " << (a >> 3) << endl;
    cout << std::bitset<16>(a >> 4) << " " << (a >> 4) << endl;

    //Bitwise not (~)

    cout << std::bitset<16>(a) << " " << (a) << endl;
    cout << std::bitset<16>(~a) << " " << (~a) << endl;

    a = 0b1100;
    b = 0b0110;

    cout << std::bitset<4>(a) << " " << std::bitset<4>(b) << endl;
    cout << std::bitset<4>(a & b) << endl; //AND 0100
    cout << std::bitset<4>(a | b) << endl; //OR  1110
    cout << std::bitset<4>(a ^ b) << endl; //XOR 1010

    a &= b; //a = a & b;

    return 0;
}