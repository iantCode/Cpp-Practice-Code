#include <iostream>

namespace work1
{
    int a = 1;
    void doSomething()
    {
        a += 3;
    }
} // namespace work1

namespace work2
{
    int a = 1;
    void doSomething() //파라미터가 다를 때는 충돌없음.
    {
        a += 5;
    }
} // namespace work2

int main()
{
    using namespace std;

    // apple = 1; (위에 선언되어 있지 않음)

    int apple = 5;

    cout << apple << endl;

    {
        int apple = 1; // 가급적 이름을 다르게 짓자
        cout << apple << endl;
    } // 블럭이 끝날 때 apple 변수는 소멸됨.

    cout << apple << endl;

    return 0;
} // 블럭이 끝날 때 apple 변수는 소멸됨.

// apple = 3; (영역 안에 선언되어 있지 않음)