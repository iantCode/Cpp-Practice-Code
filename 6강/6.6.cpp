#include <iostream>
#include <cstring>

int main()
{
    using namespace std;

    char myString[] = "string";  //g 뒤에 null 문자(\0)가 들어있다.

    cout << sizeof(myString) / sizeof(char) << endl;  //7 출력

    for (int i = 0; i < 7; ++i)
    {
        cout << static_cast<int>(myString[i]) << endl;
    }

    char myString2[255];

    //cin >> myString2;
    cin.getline(myString2, 255);
    //myString2[4] = '\0';  //3자리만 출력되고 출력이 취소됨.

    //cout << myString2 << endl;
    int ix = 0;
    while (true)
    {
        if (myString2[ix] == '\0') break;

        cout << myString2[ix] << " " << (int)myString2[ix] << endl;
        ++ix;
    }

    char source[] = "Copy this!";
    char dest[50];
    strcpy(dest, source); //cstring 에서 사용 가능하나 배열 크기에 따라 위험도가 있다.

    //strcat()  //문자열 이어주기
    cout << strcat(dest, source) << endl;

    //strcmp()  //문자열 비교
    cout << strcmp(source, dest) << endl;  //같으면 0을 리턴한다!
}