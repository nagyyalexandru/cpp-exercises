#include <iostream>
#include <memory>

class Resource
{
private:
    int data;

public:
    Resource(int data) : data(data)
    {
        std::cout << "Resource constructed with data: " << data << std::endl;
    }

    ~Resource()
    {
        std::cout << "Resource destroyed, data: " << data << std::endl;
    }

    void processData()
    {
        std::cout << "Processing data: " << data << std::endl;
    }
};

void uniquePtrExample()
{
    // Create a unique pointer
    std::unique_ptr<Resource> uniquePtr(new Resource(42));

    // Use the resource
    uniquePtr->processData();

    // now, unique_ptr automatically deletes the resource when it goes out of scope
}

void sharedPtrExample()
{
    // Create a shared pointer
    std::shared_ptr<Resource> sharedPtr1(new Resource(100));

    // Create another shared pointer that points to the same resource
    std::shared_ptr<Resource> sharedPtr2 = sharedPtr1;

    // Use the resource
    sharedPtr1->processData();
    sharedPtr2->processData();

    // shared_ptr keeps track of how many pointers are pointing to the resource
    // and deletes the resource when the Last shared_ptr goes out of scope
}

int main(void)
{
    std::cout << " - - - Unique Pointer Example - - - " << std::endl;
    uniquePtrExample();

    std::cout << " - - - Shared Pointer Example - - - " << std::endl;
    sharedPtrExample();

    return 0;
}