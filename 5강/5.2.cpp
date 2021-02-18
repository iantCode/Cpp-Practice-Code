#include <iostream>

int min(const int x, const int y)
{
    if (x > y)    return y;
    else          return x;

    return (x > y) ? y : x; //같은 내용이다.
}

int main()
{
    using namespace std;

    int x;
    cin >> x;

    if (x > 10)
    {
        cout << x << " is greater than 10" << endl;
        cout << "Test line" << endl;
    }
    else
        cout << x << " is not greater than 10" << endl;
    cout << "Test line" << endl; // {} 를 작성하는 편이 훨씬 더 안전하다.

    if (1)
        cout << "Always True" << endl;

    if (1)
        int x = 5; // 같은 이름이라도 다른 변수로 취급한다!
    else
        int x = 6;

    if (x > 10)
        cout << x << " is greater than 10" << endl;
    else if (x < 10)
        cout << x << " is less than 10" << endl;
    else // if (x == 10)
        cout << x << " is 10" << endl;

    int y;
    cin >> x >> y;

    if (x > 0 && y > 0)
        cout << "both number are positive" << endl;
    else if (x > 0 || y > 0)
        cout << "one of the numbers is positive" << endl;

    cin >> x;

    if (x > 10)
        cout << "A" << endl;
    else if (x == -1)
        return 0; // 강제 종료
    else if (x < 0)
        cout << "B" << endl;

    cout << "Not finished" << endl;

    if (x > 10);
    {
        x = 1; // 위 if문의 ; 때문에 이 문장은 무조건 실행된다.
    }

    if (x = 0) // x에 0이 대입되고 x의 값에 따라 if문이 돌아간다.
        cout << x << endl;

    return 0;
}