#include <iostream>

struct Rectangle
{
    int length;
    int width;
};

enum StudentName
{
    JACKJACK,    // = 0
    DASH,        // = 1
    VOILET,      // = 2
    NUM_STUDENTS,// = 3
};

int main()
{
    using namespace std;

    int jackjack_score;
    int dash_score;        //배열이 없다면 이런 식으로 전부 정의해서 사용해야만 한다.

    int student_scores[5]; // 5 integers

    cout << sizeof(student_scores) << endl;

    student_scores[0] = 100;  //1번째 원소
    student_scores[1] = 80;   //2번째 원소
    student_scores[2] = 50;   //3번째 원소
    student_scores[3] = 90;   //4번째 원소
    student_scores[4] = 75;   //5번째 원소
  //student_scores[5] = 60;   //6번째 원소 (런타임 에러!)

    cout << (student_scores[0] + student_scores[1]) / 2 << endl; //변수처럼 사용이 가능하다.

    //구조체 배열

    cout << sizeof(Rectangle) << endl;  //8

    Rectangle rect_arr[10];

    cout << sizeof(rect_arr) << endl;   //80

    rect_arr[0].length = 10;
    rect_arr[0].width = 10;

    int my_array[5] = {1, 2, 3, 4, 5};  //배열의 초기화
    int my_array1[] = {1, 2, 3, 4, 5};  //자동으로 my_array1의 크기를 5로 설정해준다.
    int my_array2[] {1, 2, 3, 4, 5};    //C++11 부터 사용 가능한 초기화 방법.

    //열거형을 사용한 초기화

    int student_scores1[NUM_STUDENTS];

    student_scores1[JACKJACK] = 0;
    student_scores1[DASH] = 1;

    
    int num_students = 0;
    cin >> num_students;

    int students_scores[num_students]; //배열의 사이즈가 런타임에 결정됨.
    //(컴파일 시 결정되지 않아 에러가 발생함.)

    return 0;
}