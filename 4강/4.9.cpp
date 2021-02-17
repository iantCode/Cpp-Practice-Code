#include <iostream>
#include <vector>
#include <cstdint>

int main()
{
    typedef double distance_t;
    //std::int8_t 이것 또한 typedef로 정의함.

    double my_distance;
    distance_t home2work;
    distance_t home2school;
    //distance_t의 자료형을 float로 바꾸기 수월함. 유지보수에 편리함.

    using namespace std;

    vector<pair<string, int> > pairlist;  //복잡한 자료형이 존재할 수도 있다.

    typedef vector<pair<string, int> > pairlist_t;

    pairlist_t pairlist2;

    using pairlist_t = vector<pair<string, int> >;  //typedef랑 역할은 같다.

    return 0;
}