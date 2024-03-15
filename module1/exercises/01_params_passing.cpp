#include <thread>
#include <iostream>
using namespace std;

int add(int a, int b)
{
    return a + b;
}

int main()
{
    // run add function in a thread
    // pass 3 and 4 as arguments

    thread t(add,5, 10);
    t.join();
    return 0;
}

