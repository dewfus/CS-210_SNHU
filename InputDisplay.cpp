#include <iostream>
#include "Banking.h"

using namespace std;

void Banking::inputDisplay() {

	cout << "****************************************" << endl;
	cout << "************** Data Input **************" << endl;

	cout << "Initial Investment Amount: $";
	m_initialInvestment = validateDouble();

	cout << "Monthly Deposit: $";
	m_monthlyDepo = validateDouble();

	cout << "Annual Interest (in %): ";
	m_annualInt = validateDouble();

	cout << "Number of years: ";
	m_years = validateInt();

	reportDisplay();

}