#include "Integer.h"
#include <iostream>

Integer Add(const Integer &a, const Integer &b)
{
    Integer temp;
    temp.SetValue(a.GetValue() + b.GetValue());
    return temp;    // this will cal the Move Constructor, for the temporary copy of object
}

int main()
{
    Integer a(1), b(3);
    a.SetValue(Add(a, b).GetValue());
    /*  COPY ELISION 
    on Linux, to be able to see the Move Constructor work, we have to run the command :
    $ g++ -fno-elide-constructors main.cpp Integer.cpp
    Then run the 'a.out' file manually      */
    return 0;
}