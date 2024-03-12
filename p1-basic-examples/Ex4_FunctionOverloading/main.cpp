#include <iostream>

int Add(int a, int b)
{
    return a + b;
}

double Add(double a, double b)
{
    return a + b;
}

extern "C" void Print(const int *x)
{
    std::cout << *x << std::endl;
}

int main()
{
    using namespace std;
    int result = Add(3, 5);
    cout << result << endl;

    double doubleResult = Add(3.1, 6.2);
    cout << doubleResult << endl; // Added to print the double result

    const int x = 1;
    Print(&x); // Passing the address of a const int to a const int* parameter
    return 0;
}
