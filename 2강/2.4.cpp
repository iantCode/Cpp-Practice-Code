#include <iostream>

void myFunction(void)
{

}

int main()
{
    //void my_void (변수로는 선언이 불가능하다.)

    int i = 123;
    float f = 123.456;

    void *my_void; //void형 포인터 변수

    my_void = (void*) &i;
    my_void = (void*) &f;

    return 0;
}