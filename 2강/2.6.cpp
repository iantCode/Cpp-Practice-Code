#include <iostream>

bool isEqual(int a, int b)
{
    bool result = (a == b);
    return result;
}

int main()
{
    using namespace std;

    bool b1 = true;
    bool b2(1);
    bool b3{ false };
    bool b4 = 0;

    cout << std::boolalpha;
    cout << b1 << endl;
    cout << std::noboolalpha;
    cout << b2 << endl;

    cout << b3 << endl;
    cout << std::boolalpha;
    cout << b4 << endl;

    cout << "\n";

    // not 연산자
    cout << !b1 << endl;
    cout << !b3 << endl;

    cout << "\n";

    //and operator
    cout << (b1 && b2) << endl;
    cout << (b1 && b3) << endl;
    cout << (b3 && b4) << endl;

    cout << "\n";

    //or operator
    cout << (b1 || b2) << endl;
    cout << (b1 || b3) << endl;
    cout << (b3 || b4) << endl;

    cout << "\n";

    //if
    if (false) //if (3 < 1) 등등 사용 가능
        cout << "This is true" << endl;
    else
    {
        cout << "This is false" << endl;
        cout << "This is false second line" << endl;
    }

    cout << "\n";
    cout << isEqual(0, 1) << endl;

    if (5)
    {
        cout << "5 is True" << endl; //0 외의 모든 숫자는 전부 True로 취급한다.
    }
    else
    {
        cout << "5 is False" << endl;
    }
    cout << "\n";

    bool b;

    cin >> b; //다음과 같이 작성하면 위험함. (컴파일러마다 결과가 다를 가능성이 높음.)
    cout << "Your input : " << b << endl;

    return 0;
}