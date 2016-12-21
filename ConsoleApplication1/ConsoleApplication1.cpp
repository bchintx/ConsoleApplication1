// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main()
{
    int apple = 5;
    printf("apple = %d\n", apple);
    apple = apple + 2;
    printf("apple = %d\n", apple);
    if (apple < 6) {
        printf("Hello, World!");
    }
    else {
        printf("Goodbye, Cruel World!");
    }
    return 0;
}

