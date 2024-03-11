#include <iostream>

using namespace std;

void Print(int count, char ch)
{
    for (int i = 0; i < count; ++i)
    {
        cout << ch;
    }

    cout << endl;
}

void EndMessage()
{
    cout << "End of program" << endl;
}

int main(void)
{
    // C function to return message at End of program
    atexit(EndMessage);

    // print '#' 5 times
    Print(5, '#');

    // create pointer to function by passing the address of the function to the pointer
    // the '&' is optional
    void (*pfn)(int, char) = &Print;

    // we can call it with pointer specification
    (*pfn)(5, '@');

    // or we can call it normally
    pfn(5, '+');

    cout << "End of main function" << endl;
    
    return 0;
}