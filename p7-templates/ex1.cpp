#include <iostream>

// int Add(int x,int y); // Return the sum of two elements
template <typename T>
T Add(T x, T y)
{
    return x + y;
}

// int ArraySum(const int *pArr, size_t arrSize); // Returns the sum of array elements
template <typename T>
T ArraySum(T *pArr, T arrSize)
{
    T sum = 0;
    for (int i = 0; i < arrSize; ++i)
    {
        sum += pArr[i];
    }

    return sum;
}

// int Max(const int *pArr, size_t arrSize); // Return the largest element in the array
template <typename T>
T Max(T *pArr, T arrSize)
{
    T max = pArr[0]; // set Max to element with index 0
    for (int i = 0; i < arrSize; ++i)
    {
        if (pArr[i] > max)
        {
            max = pArr[i];
        }
    }

    return max;
}

template <typename T>
std::pair<T, T> MinMax(const T *pArr, T arrSize)
{
    T min = pArr[0];
    T max = pArr[0];
    for (int i = 1; i < arrSize; ++i)
    {
        if (pArr[i] < min)
        {
            min = pArr[i];
        }
        if (pArr[i] > max)
        {
            max = pArr[i];
        }
    }
    return std::make_pair(min, max);
}

int main(void)
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    int x = 10, y = 20;
    float a = 3.8f, b = 5.2f;
    auto sum1 = Add(x, y);
    auto sum2 = Add(a, b);

    // Add
    std::cout << sum1 << std::endl;
    std::cout << sum2 << std::endl;

    // ArraySum
    std::cout << "Sum of array elements: " << ArraySum(arr, 6) << std::endl;

    // Max
    std::cout << "Max element in array: " << Max(arr, 6) << std::endl;

    // MinMax Pair
    auto minMax = MinMax(arr, 6);
    std::cout << "Min element in array: " << minMax.first << std::endl;
    std::cout << "Max element in array: " << minMax.second << std::endl;

    return 0;
}