#include <thread>
#include <iostream>
using namespace std;

void add10(int & a)
{
    a += 10;
}

int main()
{
    int a = 6;
    thread t(add10, std::ref(a));
    // run add10 function in a thread
    // pass 5 as an argument and read it's value
    t.join();
    return 0;
}

