#include <iostream> //전처리기 iostream은 입출력을 담당함.

int main(void)
{
    // (1 + 2) * (3 + 4) //expression

    int x = 1; //리터럴  //declaration
    x = 2;
    int y = x + 3;

    std::cout << y << std::endl; 
    /* std : namespace (비슷한 기능들을 묶은 것.)
    :: namespace 안에 있는 함수에 접근
    << Output Operator (stream) */
    std::cout << 3 + 5 << std::endl; 

    return 0;            //statement
}