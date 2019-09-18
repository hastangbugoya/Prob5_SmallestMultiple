// Prob5_SmallestMultiple.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

int main()
{
	unsigned long long int i = 20;
	//232792560
	while ((i % 11) + (i % 12) + (i % 13) + (i % 14) + (i % 15) + (i % 16) + (i % 17) + (i % 18) + (i % 19) + (i % 20)) 
		i += 20;
	printf("%lld", i);
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
