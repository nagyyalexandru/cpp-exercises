#include <iostream>
#include "Integer.h"

int main(void)
{
    Integer i(5);
    Integer i2(i);
    std::cout << i.GetValue() << std::endl;
    return 0;
}