#include <iostream>

using namespace std;

int main(void)
{
    int x = 2;                        //x는 변수이고, 2는 리터럴이다. 이때 = 는 대입 연산자이다.

    cout << "Hello, World!" << endl;  //이때 "Hello, World!"도 리터럴이다.

    cout << x + 3 << endl;            //이때 x와 3은 피연산자(operand)이다. 

    int p = -x;                       //단항 연산자
    int q = x + 2;                    //2항 연산자
    int r = (x > 0) ? 1 : 2;          //3항 연산자

    return 0;
}