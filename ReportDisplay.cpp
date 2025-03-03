#include "Banking.h"
#include <iostream>
#include <iomanip>

using namespace std;

void Banking::reportDisplay() {

	cout << endl << "     Balance and Interest Without Additional Monthly Deposits" << endl;
	cout << std::string(66, '=') << endl;
	cout << "  Year         Year End Balance      Year End Earned Interest" << endl;
	cout << std::string(66, '-') << endl;
	
	Banking::balanceCalcWithoutDepo(Banking::getInitialInvestment(), Banking::getAnnualInt(), Banking::getYears());

	cout << endl << "     Balance and Interest With Additional Monthly Deposits" << endl;
	cout << std::string(66, '=') << endl;
	cout << "  Year        Year End Balance     Year End Earned Interest" << endl;
	cout << std::string(66, '-') << endl;



}