#include <iostream>
#include <bitset>

int main()
{
    using namespace std;

    const unsigned int red_mask = 0xFF0000;
    const unsigned int green_mask = 0x00FF00;
    const unsigned int blue_mask = 0x0000FF;

    unsigned int pixel_color = 0xDAA520;

    cout << bitset<32>(pixel_color) << endl;

    unsigned char blue = pixel_color & blue_mask;
    unsigned char green = (pixel_color & green_mask) >> 8;
    unsigned char red = (pixel_color & red_mask) >> 16;

    cout << bitset<8>(blue) << endl;
    cout << bitset<8>(green) << endl;
    cout << bitset<8>(red) << endl;
}