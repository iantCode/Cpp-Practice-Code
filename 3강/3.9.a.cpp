#include <iostream>
#include <bitset>

int main(void)
{
    /*
        bool item1_flag = false;
        bool item2_flag = false;
        bool item3_flag = false;
        bool item4_flag = false;

        //event!
        bool item1_flag = true;

        //delete!
        bool item2_flag = false;

        if (item3_flag == true && item4_flag == false)
        {
            item3_flag = false;
            item4_flag = true;
        }
    */

    const unsigned char option0 = 1 << 0;
    const unsigned char option1 = 1 << 1;
    const unsigned char option2 = 1 << 2;
    const unsigned char option3 = 1 << 3;
    
    unsigned char items_flag = 0;
    std::cout << std::bitset<8>(items_flag) << std::endl;
    std::cout << std::bitset<8>(option0) << std::endl;
    std::cout << std::bitset<8>(option1) << std::endl;
    std::cout << std::bitset<8>(option2) << std::endl;
    std::cout << std::bitset<8>(option3) << std::endl;

    //item0 get
    items_flag |= option0;
    std::cout << std::bitset<8>(items_flag) << std::endl;

    //item3 get
    items_flag |= option3;
    std::cout << std::bitset<8>(items_flag) << std::endl;

    //item3 lost
    items_flag &= ~option3;
    std::cout << std::bitset<8>(items_flag) << std::endl;

    //has item1
    if(items_flag & option1)
        std::cout << "Has ITEM1" << std::endl;
    else
        std::cout << "Not has ITEM1" << std::endl;

    //item 2, 3 get
    items_flag |= (option2 | option3);
    std::cout << std::bitset<8>(items_flag) << std::endl;

    //if has ITEM2 bot don't have ITEM1
    if ((items_flag & option2) && !(items_flag & option1))
    {
        items_flag ^= option2;
        items_flag ^= option1;
        //items_flag ^= (option1 | option2)
    }

    return 0;
}