#include <iostream>

void doSomething(int students_scores[20]) //문법상 인자는 포인터 (따라서 [20]은 없어도 무방하다.)
{
    using namespace std;
    cout << &students_scores << endl;    //포인터 변수가 새로 선언이 되는 방식이므로 다른 주소값을 가지고 있다.
    cout << students_scores[0] << endl;
    cout << students_scores[1] << endl;
    cout << students_scores[2] << endl;
    cout << sizeof(students_scores) << endl;    //4 or 8이 출력된다.
}

int main()
{
    using namespace std;

    const int num_students = 20;

    int students_scores[num_students] = {1, 2, 3, 4, 5,};
    //식별자(students_scores)가 주소로 사용된다.

    //주소를 찾기
    cout << &students_scores << endl;
    cout << &(students_scores[0]) << endl;
    cout << &(students_scores[1]) << endl;  //4씩 더해진다.
    cout << &(students_scores[2]) << endl;
    cout << &(students_scores[3]) << endl;

    doSomething(students_scores);  //배열을 함수의 파라미터로 넣을 수 있다.
    cout << &students_scores << endl;
}