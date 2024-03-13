#include <iostream>
#include "Integer.h"

Integer operator +(int x, const Integer &y)
{
    Integer temp;
    temp.SetValue(x + y.GetValue());
    return temp;
}

std::ostream & operator <<(std::ostream & out, const Integer &a)
{
    out << a.GetValue();
    return out;
}

// operator for reading with 'std::cin'
std::istream & operator >> (std::istream &input, Integer &a)
{
    int aux;
    input >> aux;
    a.SetValue(aux);
    return input;
}

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

    // check functionality of Assignment operator overloading
    Integer c;
    c = a;
    std::cout <<"Value of c = " << c.GetValue() << std::endl;

    Integer sum1 = a + 5;   // a.operator+(5)
    Integer sum2 = 5 + a;   // 5 + a.GetValue();

    std::cout << sum1.GetValue() << std::endl;
    std::cout << sum2.GetValue() << std::endl;
    // std::cout << sum1 << std::endl;     // this expression will not work unless we implement the ostream operator '<<'
    std::cout << sum1 << std::endl;

    // std::cin >> a;
    // std::cout << a << std::endl;
    return 0;
}