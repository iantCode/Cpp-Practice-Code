#include <iostream>
#include <string> //string include 필요!
#include <limits>

int main()
{
    const char my_strs[] = "Hello, World!";
    const std::string my_hello = "Hello, World!";
    //const std::string my_hello("Hello, World"); //당연히 가능

    //std::string my_ID = 123;    //자동 형변환 불가능! 
    std::string my_ID = "123"; 

    std::cout << "Hello, World!" << std::endl;

    //입력
    std::cout << "Your age? : ";
    int age;
    std::cin >> age;    //여기서도 문제 발생! 버퍼를 지우고 다시 받아야한다!
    //std::getline(std::cin, age);
    //std::cin.ignore(32767, '\n');
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    std::cout << "Your name? : ";
    std::string name;
    //std::cin >> name;    //Jack Jack 라고 작성하면 문제가 발생!
    std::getline(std::cin, name);

    std::cout << name << " " << age << std::endl;

    std::string a = "Hello, ";
    std::string b = "World!";
    std::string hw = a + b;     //append

    hw += " I'm good!";

    std::cout << a + b << std::endl;
    std::cout << hw.length() << std::endl;

    return 0;
}