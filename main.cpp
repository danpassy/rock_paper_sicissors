/*
*	 From Dan BOUSOUGOU
*	 22/03/2025
*/

#include <iostream>
#include <cstdlib> // fonction exit()

using namespace std;
/*
* Main function of the program
*/
int main(){

	cout << "\n===========================================================" << endl;
	cout << " Welcome to the Rock-Paper-Scissors Game!" << endl;
	cout <<"===========================================================\n" << endl;

	cout <<"1. Continue the previous game." << endl;
	cout <<"2. Start a new game." << endl;
	cout <<"3. View registered users." << endl;
	cout <<"4. Delete an existing user." << endl;
	cout <<"5. View game rules." << endl;
	cout <<"6. Exit the game...\n" << endl;

	int choice;

	do {
		cout << "Enter your choice (1...6):  ";
		cin >> choice ;
	
		switch (choice){
			case 1:
				cout << "Continue the previous game" << endl;
				break;
			case 2:
				cout << " Start a new game " << endl;
				break;
			case 3:
				cout << " View registered users " << endl;
				break;
			case 4:
				cout << "Delete an existing user" << endl;
				break;
			case 5:
				cout << " View game rules " <<endl;
				break;
			case 6: 
				cout << " Goodbye... " << endl;
				exit(0);
			default:
				cout << " Invalid choice! Please try again. " << endl;
				break;
		}

	}while(choice !=6);

	return 0;
}
