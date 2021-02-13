#include <iostream>
#include <limits>

int main(void)
{
    using namespace std;

    char c1 = 65;
    char c2('A');

    cout << c1 << " " << c2 << " " << int(c1) << " " << int(c2) << endl;

    // C Style Casting (강제 변환)
    cout << (char) 65 << endl;
    cout << (int) 'A' << endl;

    // C++ Style Casting (강제 변환)
    cout << char(65) << endl;
    cout << int('A') << endl;

    // Static Cast (컴파일러가 변환이 가능한지 판단 후 변환)
    cout << static_cast<char>(65) << endl;
    cout << static_cast<int>('A') << endl;

    char c3{ 97 };
    cout << c3 << endl;
    cout << static_cast<int>(c3) << endl;

    char c4;
    cin >> c4; //입력에 abc 입력해보기
    cout << c4 << " " << static_cast<int>(c4) << endl;
    cin >> c4;
    cout << c4 << " " << static_cast<int>(c4) << endl;
    cin >> c4;
    cout << c4 << " " << static_cast<int>(c4) << endl;
    //버퍼에 bc 입력된 것이 계속 남아있기 때문에 b, c도 정상적으로 불러와진다.

    cout << sizeof(char) << endl;
    cout << (int)numeric_limits<char>::max() << endl;
    cout << (int)numeric_limits<char>::lowest() << endl;

    //escape sequence
    cout << "This is first line\nThis is second line" << endl;
    //endl은 버퍼에 있는 내용을 전부 출력하고 줄바꿈을 해라
    cout << int('\n') << endl;

    cout << "This is first tab\tThis is second tab" << endl;
    cout << int('\t') << endl;

    cout << "\"Hello, World\?\"" << endl;

    cout << "\uAC00" << endl; //가 출력

    return 0;
}