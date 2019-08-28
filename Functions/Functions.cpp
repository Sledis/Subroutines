#include <iostream>
using namespace std;

void showMenu(){
	cout << "1. Search" << endl;
	cout << "2. View record" << endl;
	cout << "3. Quit" << endl;
}

void processSelection() {

	cout << "Enter selction:" << flush;

	int input;
	cin >> input;

	switch (input) {
	case 1:
		cout << "Searching..." << endl;
		break;
	case 2:
		cout << "Viewing..." << endl;
		break;
	case 3:
		cout << "Quiting..." << endl;
		break;
	default:
		cout << "Invalid selcection." << endl;
	}
}

int main()
{

	showMenu();
	processSelection();

	return 0;
}

