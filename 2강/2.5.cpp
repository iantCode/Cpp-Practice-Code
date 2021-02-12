#include <iostream>
#include <iomanip> //input & output manipulation
#include <limits>
#include <cmath> //isnan

int main()
{
    float f = 3.141592f;
    double d(3.141592);
    long double ld{ 3.141592 };

    std::cout << sizeof(float) <<std::endl;         //출력 : 4
    std::cout << sizeof(double) <<std::endl;        //출력 : 8
    std::cout << sizeof(long double) <<std::endl;   //출력 : 12

    //각각의 자료형의 최대/최솟값
    std::cout << std::numeric_limits<float>::max() << std::endl;
    std::cout << std::numeric_limits<float>::min() << std::endl;
    std::cout << std::numeric_limits<float>::lowest() << std::endl;
    std::cout << std::numeric_limits<double>::max() << std::endl;
    std::cout << std::numeric_limits<double>::min() << std::endl;
    std::cout << std::numeric_limits<double>::lowest() << std::endl;
    std::cout << std::numeric_limits<long double>::max() << std::endl;
    std::cout << std::numeric_limits<long double>::min() << std::endl;
    std::cout << std::numeric_limits<long double>::lowest() << std::endl;
    
    //과학적 표기법
    std::cout << 3.14 << std::endl;
    std::cout << 31.4e-1 << std::endl;
    std::cout << 314e-2 << std::endl;
    std::cout << 0.314e1 << std::endl;

    //정밀도 조작
    std::cout << std::setprecision(8);      //이후에 나오는 소수의 정밀도는 8
    std::cout << 1.0 / 7.0 << std::endl;

    //부동소수점 수는 오차가 발생한다.
    d = 0.1;
    std::cout << std::setprecision(20);
    std::cout << d << std::endl; //0.10000000000000000555

    d = 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1;
    std::cout << std::setprecision(20);
    std::cout << d << std::endl; //0.99999999999999988898

    //inf, -inf, nan
    std::cout << 5.0 / 0.0 << std::endl;  //inf
    std::cout << -5.0 / 0.0 << std::endl; //-inf
    std::cout << 0.0 / 0.0 << std::endl;  //-nan

    std::cout << std::isnan(5.0/0.0) << std::endl; //inf, -inf 에서는 false 출력하더라
    std::cout << std::isnan(-5.0/0.0) << std::endl;
    std::cout << std::isnan(0.0/0.0) << std::endl;
    std::cout << std::isnan(1.0) << std::endl;

    return 0;
}