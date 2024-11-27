#pragma once
#include <iostream>

using namespace std;

class BankAccount
{
private:
	 
	double balance; // saldo
	std::string owner; //w³aœciciel
	std::string currency; //waluta

	void SetBalance(double b);

public:

	BankAccount();

	BankAccount(double b, string o, string c)
	{
		balance = b;
		owner = o;
		currency = c;
	}

	double GetBalance();

	void AccountInformation();

	void DepositToAccount(double amount);

	bool WidthdrawalFromAccount(double amount);

	void TransferBetweenAcounts(BankAccount& targetAccount, double amount);
};