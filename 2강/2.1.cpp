#include <iostream>

int main()
{
    bool bValue = false;
    char charValue = 'A';
    float floatValue = 3.141592f;     //리터럴에 f를 붙여야 float 형으로 처리됨.
    double doubleValue = 3.141592;    //리터럴에 f를 붙이지 않으면 double 형으로 처리됨.

    auto autoValue = 3.141592;        //변수형을 컴파일 단계에서 자동으로 부여함.

    //초기화 방법
    int a = 123;    //copy initialization
    int b(123);     //direct initialization
    int c{ 123 };   //uniform initialization 초기화에 조금 더 엄격하기 때문에 최근에는 이 방법을 권장함.

    //std::cout << (bValue ? 1 : 0) << std::endl;
    std::cout << bValue << std::endl; // 출력 : 0 (true, false도 결국 숫자로 저장됨.)
    std::cout << charValue << std::endl;
    std::cout << floatValue << std::endl;
    std::cout << doubleValue << std::endl;
    std::cout << autoValue << std::endl;
    //std::cout << sizeof(autoValue) << std::endl; 로 변수형을 짐작할 수 있다.

    return 0;
}