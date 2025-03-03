#include "Banking.h"
#include <iostream>
#include <iomanip>

using namespace std;

void Banking::setInitialInvestment(double t_initialInvestment) { m_initialInvestment = t_initialInvestment; }
void Banking::setMonthlyDepo(double t_monthlyDeposit) { m_monthlyDepo = t_monthlyDeposit; }
void Banking::setAnnualInt(double t_annualInterest) { m_annualInt = t_annualInterest; }
void Banking::setYears(int t_years) { m_years = t_years; }

double Banking::getInitialInvestment() { return m_initialInvestment; }
double Banking::getMonthlyDepo() { return m_monthlyDepo; }
double Banking::getAnnualInt() { return m_annualInt; }
int Banking::getYears() { return m_years; }

double Banking::balanceCalcWithoutDepo(double t_initialInvestment, double t_annualInt, int t_years) {

	double balance = t_initialInvestment;

	for (int i = 0; i < t_years; i++) {
		m_interestEarned = balance * (t_annualInt / 100);
		balance += m_interestEarned;
		cout << " " << left << setw(5) << (i + 1) << "\t\t$" << fixed << setprecision(2) << balance << "\t\t\t\t$" << m_interestEarned << endl;
	}

	return balance;

}