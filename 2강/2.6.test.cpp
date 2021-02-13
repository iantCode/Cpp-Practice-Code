#include <iostream>

bool isOdd(int input)
{
    return (input % 2);
}

int main(void)
{
    using namespace std;

    int input;
    cout << "정수를 하나 입력해주세요 : ";
    cin >> input;

    if (isOdd(input))
    {
        cout << input << "는 홀수입니다." << endl;
    }
    else
    {
        cout << input << "는 짝수입니다." << endl;
    }
}