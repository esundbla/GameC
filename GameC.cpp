// GameC.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdio.h>

void cat() {
    std::cout << "Sup cat?\n";
}

int main()
{
    int a = 2;
    short k = 22;
    double p = 2.0;

    printf("size of: %d \n", sizeof(a));
    printf("size of: %d \n", sizeof(k));
    printf("size of: %d \n", sizeof(p));

    
}