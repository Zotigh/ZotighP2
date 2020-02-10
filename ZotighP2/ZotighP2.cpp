// ZotighP2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Lance Zotigh (lzotigh1@cnm.edu)
//Date: (2/10/19 - 1/17/19)
//Porpose: 

#include <iostream>
#include <windows.h>

using namespace std;

//Constants
const int QUIT = 6;
const int MAX_COLORS = 6;
const int MAX_PIX = 3;

int main()
{
	int colorChoice;
	HANDLE screen = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(screen, colorChoice);

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
