#include <iostream>
#include <typeinfo>
#include <iomanip>

int main()
{
    using namespace std;

    int a = 123.0;
    cout << typeid(a).name() << endl;

    //작은 것에서 큰 것으로.

    float f = 1.0f;
    double d = a;   //numeric promotion

    //numeric conversion (큰 것에서 작은 것으로)
    d = 3;
    short s = 2;

    //문제가 되는 경우
    int i = 30000;
    char c = i;

    cout << static_cast<int>(c) << endl; // 48

    d = 0.123456789;
    f = d;    //정밀도가 부족해서 표현할 수 없다.

    cout << setprecision(12) << f << endl;

    f = 3.14;
    i = f; // 3 저장

    cout << 5u - 10 << endl;  //4294967291
    // 우선순위 int < unsigned int 따라서 int는 unsigned int로 바뀐다.
    
    /* 우선순위 표
        int, unsigned int, long, unsigned long, long long, unsigned long long
        float, double, long double
    */

    i = (int) 4.0; // C style casting
    i = int(4.0);  // Cpp style casting
    i = static_cast<int>(4.0); // C style casting 

    return 0;
}