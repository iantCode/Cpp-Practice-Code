#include <iostream> //cout, cin, endl, ...
#include <cstdio>   //printf

int main(void)
{
    // std::cout
    // std라는 namespace 안에 cout이 있는데 이를 사용하기 위해서는 ::을 사용해서 접근해야 한다.
    std::cout << "Hello, World!";
    // End line이 없는 코드
    std::cout << "Hello, World!" << std::endl;
    // << 오른쪽에 있는 내용이 물결을 타고 왼쪽으로 가는 느낌으로 이해하면 충분

    int x = 2021;
    // 변수 출력
    std::cout << "x is " << x << std::endl;

    // Escape Sequence 사용
    std::cout << "abc" << "\t" << "def\n";

    using namespace std; // std:: 를 제거하고 작성할 수 있다.

    cout << "Hello, World!" << endl;


    // cin 사용법
    int getNum = 0;
    cin >> getNum;

    cout << "Your input is " << getNum << endl;

    return 0;
}