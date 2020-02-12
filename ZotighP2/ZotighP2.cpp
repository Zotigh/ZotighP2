// ZotighP2.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Lance Zotigh (lzotigh1@cnm.edu)
// Date: (2/10/19 - 1/17/19)
// Purpose: A C++ program that asks the user to select a color and a shape to draw.  

#include <iostream>
#include <windows.h>

using namespace std;

// Constants
const int QUIT = 6;
const int MAX_COLORS = 6;
const int MAX_PIX = 3; 

int main()
{
	// Variables 
	int colorChoice;
	int choice;
	string again;

	// This is the HANDLE method
	HANDLE screen = GetStdHandle(STD_OUTPUT_HANDLE);
	
	// cout statement that tells the user 
	cout << "Purpose: A C++ program that asks the user to select a color and a shape to draw." << endl;

	// My play do while loop
	do {
		// cout/cin statements that are used to get the users input 
		cout << "\nPlease select a color from the menu you would like to use by typing the desired colors corresponding number and pressing enter on the keyoard or type 6 and press enter to quit the program:" << endl
			<< "\n1 = Black" << endl
			<< "2 = Green" << endl
			<< "3 = Cyan" << endl
			<< "4 = Red" << endl
			<< "5 = Purple" << endl
			<< "6 = quit" << endl
			<< "\nYour Response: " ;
		cin >> colorChoice;

		//if statement to make sure that the desired range is acheived 
		// While stateent seens to have some sort of probel if statemet worked though ???
		if (colorChoice <= 5 && colorChoice >= 1 && colorChoice != QUIT) {
			
			// Second do while loop for images
			do {
				// cout/cin statements that are used to get the users input 
				cout << "\nPlease select an image to show from the list of available images by typing the desired pictures corresponding number" 
					<<"and pressing enter on the keyoard or type 6 and press enter to go back to color selector menu:" << endl
					<< "\n"
					<< "1 = Smiley Face" << endl
					<< "2 = Upside-Down triangle" << endl
					<< "3 = WANTED" << endl
					<< "6 = Go Back and Re-select COLOR" << endl
					<< "\nYour Response: ";
				cin >> choice;

				// if/else if statements to check user input
				if (choice == 1) {
					// Ascii...imgs SMmiley PT1
					// Also the sets the color user picked to the light version
					SetConsoleTextAttribute(screen, colorChoice + 8);
					cout << "\n XXXXXXXXX " << endl;
					cout << "X  0   0  X" << endl;
					cout << "X         X" << endl;
					cout << "X _     _ X" << endl;
					cout << "X  -----  X" << endl;
					cout << " XXXXXXXXX " << endl;
				} else if (choice == 2) {
					// Ascii...imgs Triangle PT2
					// Also the sets the color user picked to the light version
					SetConsoleTextAttribute(screen, colorChoice + 8);
					// Switched triangle not sure if thats ok so it's there if not...
					//cout << "\n     X     " << endl;
					//cout << "    XXX    " << endl;
					//cout << "   XXXXX   " << endl;
					//cout << "  XXXXXXX  " << endl;
					//cout << " XXXXXXXXX " << endl;
					cout << "\nXXXXXXXXXXX" << endl;
					cout << " XXXXXXXXX " << endl;
					cout << "  XXXXXXX  " << endl;
					cout << "   XXXXX   " << endl;
					cout << "    XXX    " << endl;
					cout << "     X     " << endl;
				} else if (choice == 3) {
					// Ascii...imgs Wanted_Bunny PT3
					// Also the sets the color user picked to the light version
					SetConsoleTextAttribute(screen, colorChoice + 8);
					cout << "\nXXXXXXXXXXX" << endl;
					cout << "X         X" << endl;
					cout << "X  (/(/   X" << endl;
					cout << "X  (+-)   X" << endl;
					cout << "X (()('') X" << endl;
					cout << "X         X" << endl;
					cout << "X         X" << endl;
					cout << "X WANTED  X" << endl;
					cout << "XXXXXXXXXXX" << endl;
				}
			} while (choice != QUIT);
		}

		// TODO's: Work on for future project to see if I can get it working porperly (below \/)

		//if (colorChoice >= 5 && choice != QUIT || colorChoice <= 1 && choice != QUIT) {
		//	//Cout to work with the erroe

		//	// cout/cin statements that are used to get the users input 
		//	cout << "\nPlease re-enter a color you would like to use: " << endl
		//		<< "1 = Black" << endl
		//		<< "2 = Green" << endl
		//		<< "3 = Cyan" << endl
		//		<< "4 = Red" << endl
		//		<< "5 = Purple" << endl
		//		<< "6 = quit" << endl;
		//	cin >> colorChoice;

		//if (colorChoice > 5 && colorChoice >= 1) {
		//	do {
		//	    // cout/cin statements that are used to get the users input 
		//		cout << "Select a image to show from slot 1, 2, or 3: ";
		//		cin >> choice;

		//			if (choice == 1) {
		//				// Ascii...imgs SMmiley USE -> cout << "" << endl;       PT1
		//				// Also the sets the color user picked
		//				SetConsoleTextAttribute(screen, colorChoice + 8);
		//				cout << "\n XXXXXXXXX " << endl;
		//				cout << "X  0   0  X" << endl;
		//				cout << "X         X" << endl;
		//				cout << "X _     _ X" << endl;
		//				cout << "X  -----  X" << endl;
		//				cout << " XXXXXXXXX " << endl;
		//			} else if (choice == 2) {
		//				// Ascii...imgs Triangle USE -> cout << "" << endl;      PT2
		//				// Also the sets the color user picked
		//				SetConsoleTextAttribute(screen, colorChoice + 8);
		//				// Not sure which way I want the triangle
		//				//cout << "     X     " << endl;
		//				//cout << "    XXX    " << endl;
		//				//cout << "   XXXXX   " << endl;
		//				//cout << "  XXXXXXX  " << endl;
		//				//cout << " XXXXXXXXX " << endl;
		//				cout << "\nXXXXXXXXXXX" << endl;
		//				cout << " XXXXXXXXX " << endl;
		//				cout << "  XXXXXXX  " << endl;
		//				cout << "   XXXXX   " << endl;
		//				cout << "    XXX    " << endl;
		//				cout << "     X     " << endl;
		//			} else if (choice == 3) {
		//				// Ascii...imgs RandBunnyFlip USE -> cout << "" << endl;    PT3
		//				// Also the sets the color user picked
		//				SetConsoleTextAttribute(screen, colorChoice + 8);
		//				cout << "\nXXXXXXXXXXX" << endl;
		//				cout << "X         X" << endl;
		//				cout << "X  (/(/   X" << endl;
		//				cout << "X  (+-)   X" << endl;
		//				cout << "X (()('') X" << endl;
		//				cout << "X         X" << endl;
		//				cout << "X         X" << endl;
		//				cout << "X WANTED  X" << endl;
		//				cout << "XXXXXXXXXXX" << endl;
		//			}
		//		} while (choice != QUIT);
		//	}
		//}

	} while (colorChoice != QUIT);

	// Good bye message
 	cout << "Thank you for using, good-bye!" << endl;
	
	return 0;
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
