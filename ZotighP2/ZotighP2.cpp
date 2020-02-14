// ZotighP2.cpp 
// Lance Zotigh (lzotigh1@cnm.edu)
// Date: (2/10/19 - 1/17/19)
// Purpose: A C++ program that asks the user to select a color and a shape to draw.  

#include <iostream>
#include <windows.h>

using namespace std;

// Constants
const int QUIT = 6;
// Wasn't sure if I'd get docked so it's here however I didnt initilize it and it was never used. I understand that it can 
// be of use to have multiple names with matching values in different classes however since this is in the same class I found it redundant to 
// repeat. ->
//const int MAX_COLORS = 6;
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

	// add a if statement to loop back if there is an invalid user input 
	// My play do while loop
	do {
		// cout/cin statements that are used to get the users input 
		cout << "\nPlease select a color from the menu you would like to use by typing the desired colors corresponding number and pressing" << endl
			<< "enter on the keyoard or type 6 and press enter on the keyoard to quit the program:" << endl
			<< "\n1 = Blue" << endl
			<< "2 = Green" << endl
			<< "3 = Cyan" << endl
			<< "4 = Red" << endl
			<< "5 = Purple" << endl
			<< "6 = quit" << endl
			<< "\nYour Response: " ;
		cin >> colorChoice;

		// if statement to make sure that the desired input range is acheived 
		if (colorChoice <= 1 || colorChoice >= 7) {
			// cout/cin statements that are used to get the users re-entered input 
			cout << "\nInvalid Entry!" << endl
				<< "\nPlease re-enter a valid selection from the color menu you would like to use by typing the desired colors corresponding" << endl
				<< "number and pressing enter on the keyoard or type 6 and press enter on the keyboard to quit the program:" << endl
				<< "\n1 = Blue" << endl
				<< "2 = Green" << endl
				<< "3 = Cyan" << endl
				<< "4 = Red" << endl
				<< "5 = Purple" << endl
				<< "6 = quit" << endl
				<< "\nYour Response: ";
			cin >> colorChoice;
		}

		// if statement to control the users unput is valid to move on to the next option menu
		if (colorChoice <= 5 && colorChoice >= 1 && colorChoice != QUIT) {
			
			// Second do while loop for images
			do {
				// cout/cin statements that are used to get the users input 
				cout << "\nPlease select an image to show from the list of available images by typing the desired pictures corresponding number" << endl
					<<"and pressing enter on the keyoard or type 6 and press enter to go back to color selector menu:" << endl
					<< "\n"
					<< "1 = Smiley Face" << endl
					<< "2 = Upside-Down triangle" << endl
					<< "3 = WANTED" << endl
					<< "6 = Go Back and Re-Select COLOR" << endl
					<< "\nYour Response: ";
				cin >> choice;

				if (choice <= 0 || choice >= 4 && choice != QUIT) {
					// cout/cin statements that are used to get the users input 
					cout << "\nInvalid Entry!" << endl
						<< "\nPlease re-select an image to show from the list of available images by typing the desired pictures corresponding number" << endl
						<< "and pressing enter on the keyoard or type 6 and press enter to go back to color selector menu:" << endl
						<< "\n"
						<< "1 = Smiley Face" << endl
						<< "2 = Upside-Down triangle" << endl
						<< "3 = WANTED" << endl
						<< "6 = Go Back and Re-Select COLOR" << endl
						<< "\nYour Response: ";
					cin >> choice;
			    }

				// Nested if statement to deal with users input 
				if (choice == 1) {
					// Ascii...imgs SMmiley PT1
					// Also sets the color user the picked to the light version
					SetConsoleTextAttribute(screen, colorChoice + 8);
					cout << "\nXXXXXXXXXXX" << endl;
					cout << "X  0   0  X" << endl;
					cout << "X         X" << endl;
					cout << "X _     _ X" << endl;
					cout << "X  -----  X" << endl;
					cout << "XXXXXXXXXXX" << endl;
			
				} else if (choice == 2) {
					// Ascii...imgs Triangle PT2
					// Also sets the color the user picked to the light version
					SetConsoleTextAttribute(screen, colorChoice + 8);
					// Switched triangle not sure if thats ok so, it's there if not...
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
				}
				//Was going to leave as 3 but I thought I might as well add the usage of the MAX_PIX Constant variable somewhere.
				else if (choice == MAX_PIX) {
					// Ascii...imgs Wanted_Bunny PT3
					// Also sets the color the user picked to the light version
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
	} while (colorChoice != QUIT);

	// Good bye message
 	cout << "Thank you for using, good-bye!" << endl;
	
	return 0;
}