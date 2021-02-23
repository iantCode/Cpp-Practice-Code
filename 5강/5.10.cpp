#include <iostream>
using namespace std;

int getInt()
{
    while (true)
    {
        cout << "Enter a integer number : ";
        int x;
        cin >> x;

        //버퍼를 비우는 방법
        std::cin.ignore(32767, '\n'); //32767은 적당한 숫자.

        if (std::cin.fail())
        {
            std::cin.clear();
            cout << "Invaild number, please try again!" << endl;
        }
        else
            return x;
    }
}

char getOperator()
{
    while (true)
    {
        cout << "Enter a operator (+, -) : ";
        char op;
        cin >> op;
        std::cin.ignore(32767, '\n');

        if (op == '+' || op == '-')
            return op;
        cout << "Invaild Operator, please try again!" << endl;
    }
}

void printResult(const int x, const char op, const int y)
{
    switch (op)
    {
        case '+':
            cout << x + y << endl;
            break;
        case '-':
            cout << x - y << endl;
            break;
        default:
            cout << "Invaild Operator!" << endl;
    }
}

int main()
{
    int x = getInt();
    char op = getOperator();
    int y = getInt();

    printResult(x, op, y);

    return 0;
}