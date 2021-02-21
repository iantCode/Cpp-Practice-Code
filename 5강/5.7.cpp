#include <iostream>

int pow(const int base, const int exponent)
{
    int result = 1;

    for (int count = 0; count < exponent; ++count)
    {
        result *= base;
    }

    return result;
}

int main()
{
    using namespace std;

    //기본적인 사용 방법
    for (int count = 0; count < 10; ++count)
    {
        cout << count << endl;
    }
    /* 작동 원리
        1. 초기화 식을 실행
        2. 조건에 맞는지 확인 후 블럭 안에 있는 내용을 실행
        3. 증감식을 계산
        4. 2, 3을 앞으로 반복한다.
    */

    int count = 0;
    for (    ; count < 10; count++) //내용이 비어있어도 상관없음.
    {
        cout << count << endl;
    }
    cout << count << endl;

    for ( ; ; count++)  //조건이 비어있으면 무한루프
    {
        cout << count << endl;
    }

    cout << pow(2, 4) << endl;

    for (int count = 9; count >= 0; count -= 2)
    {
        cout << count << endl;
    }

    // 변수 2개 이상 쓰기
    for (int i = 0, j = 1; i < 10; ++i, --j)
    {
        cout << i << " " << j << endl;
    }

    for (int i = 0; i < 10; i++)
    {
        for (int j = 9; j > 0; j--)
        {
            cout << i << " " << j << endl;
        }
    }

    return 0;
}