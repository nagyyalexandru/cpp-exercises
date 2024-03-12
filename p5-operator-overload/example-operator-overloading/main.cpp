#include <iostream>
#include "Integer.h"

int main(void)
{
    Integer a(1), b(3);

    // call the '+' overloaded operator
    Integer sum = a + b;

    // call the '++' overloaded operator (pre increment)
    ++sum;

    // call the '++' overloaded operator (post increment)
    sum++;

    std::cout << sum.GetValue() << std::endl;

    if(a == b)
    {
        std::cout << "Same" << std::endl;
    }
    else
    {
        std::cout << "Not same" << std::endl;
    }
    return 0;
}