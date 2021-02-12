#include <iostream>
//#include <cstdint> //iostream 에서도 include 되어있음.

int main(void)
{
    using namespace std;

    std::int16_t i(5);        //16비트 정수 (short)
    std::int8_t myInt = 65;   //8비트 정수 (char)

    cout << myInt << endl;

    std::int_fast8_t fi(5);   //빠른 8비트 정수 (char)
    std::int_least64_t fl(5); //최소 64비트 정수 (long)

    return 0;
}