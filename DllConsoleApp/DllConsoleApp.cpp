// DllConsoleApp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <HighObject.h>

int main()
{
    std::cout << "Hello World!\n";

    HighObject hObj1(1, 'c');
    HighObject hObj2(2, '+');
    HighObject hObj3(3, '+');

    hObj1.Print();
    hObj2.Print();
    hObj3.Print();

    std::cin.get();
}

