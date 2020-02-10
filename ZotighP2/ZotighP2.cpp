// ZotighP2.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Lance Zotigh (lzotigh1@cnm.edu)
// Date: (2/10/19 - 1/17/19)
// Porpose: A C++ program that asks the user to select a color and a shape to draw.  

#include <iostream>
#include <windows.h>

using namespace std;

//Constants
const int QUIT = 6;
const int MAX_COLORS = 6;
const int MAX_PIX = 3;

int main()
{
	// Variables 
	int colorChoice;

	// cout statements that are used to get the users input 
	cout << "Please enter a color you would like to use: ";
	cin >> colorChoice;

	// This is the HANDLE method
	HANDLE screen = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(screen, colorChoice);
	 
	// Ascii...imgs USE -> cout << "" << endl;
	cout << " XXXXXXXXX " << endl;
	cout << "X  0   0  X" << endl;
	cout << "X         X" << endl;
	cout << "X _     _ X" << endl;
	cout << "X  -----  X" << endl;
	cout << " XXXXXXXXX " << endl;

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
