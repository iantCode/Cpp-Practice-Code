#include <iostream>
#include <cstdlib>    //std::rand(), std::srand()
#include <ctime>      //std::time()
#include <random>

unsigned int PRNG() // 간단한 RNG 예제 (Pseudo Random Number Generator)
{
    static unsigned int seed = 5623; // seed number

    seed = 8253729 * seed + 2396403;

    return seed % 32768;
}

int getRandomNumber(int min, int max)
{
    static const double fratcion = 1.0 / (RAND_MAX + 1.0);

    return min + static_cast<int>((max - min + 1) * (std::rand() * fratcion));
}

int main()
{
    std::srand(5623);  //시드값 설정
    std::srand(static_cast<unsigned int>(std::time(0))); //시드값을 타임으로 설정
    //시드값 고정 시 계속 고정된 값을 생성하게 된다.

    using namespace std;

    for (int count = 1; count <= 100; count++)
    {
        cout << std::rand() << "\t";
        
        if (count % 5 == 0) cout << endl;
    }

    //random 사용법

    std::random_device rd;
    std::mt19937_64 mersenne(rd());  //create a mesenne twister
    std::uniform_int_distribution<> dice(1, 6);

    cout << dice(mersenne) << endl;

    return 0;
}