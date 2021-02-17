#include <iostream>
#include <string>

struct Person  //구조체
{
    double height;
    //double height = 3.0; //여기서도 초기화가 가능하다. 이때 선언 시 초기화를 안 한다면 이 defalut 값이 들어간다.
    float weight;
    int age;
    std::string name;

    void printPerson() //구조체 안에 속해있는 함수
    {
        std::cout << height << " " << weight << " " << age << " " << name << std::endl;
    }
};

struct Employee
{
    short id = 0;               //2 bytes
    int age = 20;               //4 bytes
    double wage = 3000000.0;    //8 bytes
};

//void printPerson(double height, float weight, int age, std::string name);
void printPerson(Person ps)
{
    std::cout << ps.height << " " << ps.weight << " " << ps.age << " " << ps.name << std::endl;
}

struct Family
{
    Person me, dad, mom;
};

Person getMe()
{
    Person me {200.0, 80.0, 20, "Hello, World!"};
    return me;
}

int main()
{
    using namespace std;

    Person me;
    me.height = 200.0;
    me.weight = 80.0;
    me.age = 20;
    me.name = "Hello, World!";

    Person myself{200.0, 80.0, 20, "Hello, World!"}; //위와 아래와 같다.

    printPerson(myself);
    myself.printPerson();  //printPerson(myself); 와 동일하게 작동한다.

    Person me2 = me; //단순할 때는 사용해도 되지만 복잡한 경우에는 추천하지는 않는다.

    Person me3 = getMe();

    Employee emp1;
    cout << emp1.age << endl; // 20 출력
    cout << sizeof(emp1) << endl; // 16 = 2 + (2) + 4 + 8

    return 0;
}