#include <iostream>
#include "Banking.h"

using namespace std;

double Banking::validateDouble() {

	double num;

	while (1) {
	
		if (cin >> num && num >= 0) {
			break;
		}
		else {
			cout << "Invalid Input. Please try again: ";
			cin.clear();
			while (cin.get() != '\n');
		}
	
	}

	return num;

}

int Banking::validateInt() {

	int num;

	while (1) {

		if (cin >> num && num > 0) {
			break;
		}
		else {
			cout << "Invalid Input. Please try again: ";
			cin.clear();
			while (cin.get() != '\n');
		}

	}

	return num;

}