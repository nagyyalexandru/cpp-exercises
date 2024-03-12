#include <iostream>

inline int Square(int x)
{
    return x * x;
}

using namespace std;

int main(void)
{
    int val = 5;
    int result = Square(val + 1);
    cout << result << endl;
    
    return 0;
}