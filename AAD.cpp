// AAD.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <stdlib.h>
#include "letters.h"
#include <conio.h>
#include <iostream>

int main()
{
    char a[100];
    int i, j, counter = 0;
    for (i = 0; i < 99; i++)
        a[i] = '\0';
    for (j = 0; j < 100; j++)
    {
        system("CLS");
        std::cout << "Hello world!\n\n\t\t Welcome to Astrix Array Display(AAD)\nEnter THE WORD you want to print : ";
        std::cout << "Enter a sentence(NB: 1(Backspace), 0(Done)) : You have(" << 100 - j << " / 100)\n";

        for (i = 0; i < j; i++)
            std::cout << a[i];
        a[j] = '\0';
        a[j] = _getch();
        if (a[j] == '1')
        {
            a[j] = '\0';
            if (j < 0)
                continue;
            else
                j = j - 2;
            counter--;
            continue;
        }
        counter++;
        if (a[j] == '0')
            break;
    }
    selector(a);

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
