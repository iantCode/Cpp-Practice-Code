#include <iostream>

using namespace std;

enum class Colors
{
    BLACK,
    WHITE,
    RED,
    GREEN,
    BLUE
};

void printColorName(Colors color)
{
    /*
        if (color == Colors::BLACK)
            cout << "Black" << endl;
        else if (color == Colors::WHITE)
            cout << "White" << endl;
        else if (color == Colors::RED)
            cout << "Red" << endl;
    */

    switch (color)
    {
        case Colors::BLACK :
            cout << "Black" << endl;
            break;
        case Colors::WHITE :
            cout << "White" << endl;
            break;
    }

    switch (static_cast<int>(color))
    {
        case 2:
            cout << "Red" << endl;
            break;
    }
}

int main()
{
    printColorName(Colors::BLACK);

    int x;
    cin >> x;

    switch (x)
    {
        case 0:
            cout << "Zero" << endl;
            break;  //break;를 쓰지 않으면 case 1, case 2도 실행한다!
        case 1:
            cout << "One" << endl;
            break;
        case 2:
            cout << "Two" << endl;
            //break;  //안 적더라도 깜빡 잊은 게 아니라는 의미로 주석으로 남겨두자.
    }

    cin >> x;

    switch (x)
    {
        int a;
        //int b = 5;  //선언은 할 수 있는데 초기화는 case 문 다음에서만 할 수 있다.

        case 0:
        {  // 정 불안하면 블럭으로 쌓는 것도 좋다.
            int y;  //선언을 여기에 해도 선언은 int a; 위치에 한 것으로 판단한다.
            y = 5;
            break;
        }

        case 1:
        {
            int y = 5;
            cout << y << endl;
        }

        default:
            cout << "Undefined input : " << x << endl;
    }
}