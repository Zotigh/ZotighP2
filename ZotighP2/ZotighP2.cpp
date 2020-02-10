// ZotighP2.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Lance Zotigh (lzotigh1@cnm.edu)
// Date: (2/10/19 - 1/17/19)
// Purpose: A C++ program that asks the user to select a color and a shape to draw.  

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

	// This is the HANDLE method
	HANDLE screen = GetStdHandle(STD_OUTPUT_HANDLE);

	// cout statement that tells the user 
	cout << "Purpose: A C++ program that asks the user to select a color and a shape to draw." << endl;

	// cout/cin statements that are used to get the users input 
	cout << "Please enter a color you would like to use: ";
	cin >> colorChoice;

	// cout statement that asks the user what img they would like
	cout << "what image would you like to see? ";
	//cin >> ;

	// cout to ask for type of image they want

	// Ascii...imgs SMmiley USE -> cout << "" << endl;       PT1
	// Also the sets the color user picked
	SetConsoleTextAttribute(screen, colorChoice);
	cout << "\n XXXXXXXXX " << endl;
	cout <<   "X  0   0  X" << endl;
	cout <<   "X         X" << endl;
	cout <<   "X _     _ X" << endl;
	cout <<   "X  -----  X" << endl;
	cout <<   " XXXXXXXXX " << endl;

	// Ascii...imgs Triangle USE -> cout << "" << endl;      PT1
	// Also the sets the color user picked
	SetConsoleTextAttribute(screen, colorChoice);
	// Not sure which way I want the triangle
	//cout << "     X     " << endl;
	//cout << "    XXX    " << endl;
	//cout << "   XXXXX   " << endl;
	//cout << "  XXXXXXX  " << endl;
	//cout << " XXXXXXXXX " << endl;
	cout << "\nXXXXXXXXXXX" << endl;
	cout <<   " XXXXXXXXX " << endl;
	cout <<   "  XXXXXXX  " << endl;
	cout <<   "   XXXXX   " << endl;
	cout <<   "    XXX    " << endl;
	cout <<   "     X     " << endl;

	// Ascii...imgs RandBunnyFlip USE -> cout << "" << endl;          PT3
	// Also the sets the color user picked
	SetConsoleTextAttribute(screen, colorChoice);
	cout << "\nXXXXXXXXXXX" << endl;
	cout <<   "X         X" << endl;
	cout <<   "X  (/(/   X" << endl;
	cout <<   "X  (+-)   X" << endl;
	cout <<   "X ((')('')X" << endl;
	cout <<   "X         X" << endl;
	cout <<   "X WANTED  X" << endl;
	cout <<   "XXXXXXXXXXX" << endl;
	

	int i = 0;
	//My play do while loop
	do {

	} while (i = 0);

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
