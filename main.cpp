#include<iostream>
using namespace std;
string inv[9];

void shop();

int main() {

	shop();

}
void shop() {
	char input = 'a';
	cout << "---------------------------------------------------------" << endl;
	cout << "Welcome to Cory's Freaky Food what can we do for you today!" << endl;
	cout << "type 'q' to quit" << endl;
	while (input != 'q') {
		cout << endl;
		cout << "Pick an item: " << endl;
		cout << "P) Pablo's freaky 6 piece" << endl;
		cout << "C) Cory's Chicken Sandwitch" << endl;
		cout << "R) Raidin's super salty fries" << endl;
		cout << "A) Andy's FuFu special" << endl;
		cout << "J) Javi's burger" << endl;
		cout << "B) jeremy's burrito" << endl;
		cout << "E) Enoch's Nachos" << endl;
		cout << "S) Sullivan's slushie" << endl;
		cout << "N) Noah's Coleslaw" << endl;
		cin >> input;
		switch (input) {
		case 'P':
			cout << "Heres your Pablo's freaky 6 piece -$4.00" << endl;
			inv[0] = "6-Piece";
			break;
		case 'C':
			cout << "Heres your  Chicken Sandwitch -400" << endl;
			inv[1] = "jeremy";
			break;
		case '?':
			cout << "Heres your ??? you can have it for free" << endl;
			cout << "Here is your food have a good day!" << endl;
			break;
		}
		cout << "---------------------------------------------------------" << endl;
		cout << "Inventory: ";
		for (int i = 0; i < 9; i++)
			cout << inv[i] << " | ";
		cout << endl;
	}
}
