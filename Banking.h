#ifndef BANKING_H
#define BANKING_H

class Banking {

public:

	void inputDisplay();
	void reportDisplay();
	double validateDouble();
	int validateInt();

	void setInitialInvestment(double t_initialInvestment);
	void setMonthlyDepo(double t_monthlyDepo);
	void setAnnualInt(double t_annualInt);
	void setYears(int t_years);

	double getInitialInvestment();
	double getMonthlyDepo();
	double getAnnualInt();
	int getYears();

	double balanceCalcWithoutDepo(double t_initialInvestment, double t_annualInt, int t_years);

private:
	
	double m_initialInvestment;
	double m_monthlyDepo;
	double m_annualInt;
	double m_interestEarned;
	int m_years;

};


#endif
