#include "BankAccount.h"

class SavingBankAccount : public BankAccount
{
private:

	double interestRate;

public:
	
	SavingBankAccount()
	{
		interestRate = 0.05;
	}

	SavingBankAccount(double b, string o, string c, double ir)
	{
		interestRate = ir;
	}

	void CalculateInterestRate()
	{
		b = b + b * ir;
	}

};