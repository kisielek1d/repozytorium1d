
#include<iostream>


class BankAccount
{
public:
	double balance; // saldo
	std::string owner; //właciciel
	std::string currency; //waluta



	void AccountInformation()
	{
		std::cout << "Informacja o koncie bankowym.\n";
		std::cout << "W³aœciciel: " << owner << "\n";
		std::cout << "Saldo: " << balance << " " << currency << "\n";
	}
};
void depositToAccount(BankAccount& account, double amount)
{
	amount = abs(amount);
	account.balance = account.balance + amount;
}

bool widthdrawalFromAccount(BankAccount& account, double amount)
{
	amount = abs(amount);
	if (account.balance - amount >= 0)
	{
		account.balance = account.balance - amount;
		return true;
	}
	return false;
}

void transferBetweenAcounts(BankAccount& sourceAccount, BankAccount& targetAccount, double amount)
{
	if (widthdrawalFromAccount(sourceAccount, amount) == true)
		depositToAccount(targetAccount, amount);
}

void task3()
{
	BankAccount firstAccount;
	firstAccount.balance = 10000;
	firstAccount.currency = "z³";
	firstAccount.owner = "Jan Kowalski";

	firstAccount.AccountInformation();

	BankAccount secondAccount;
	secondAccount.balance = 15000;
	secondAccount.currency = "z³";
	secondAccount.owner = "Ewa Nowak";

	secondAccount.AccountInformation();

	depositToAccount(firstAccount, -14.50);
	firstAccount.AccountInformation();

	widthdrawalFromAccount(firstAccount, 14.50);
	firstAccount.AccountInformation();

	transferBetweenAcounts(secondAccount, firstAccount, 1000);
	firstAccount.AccountInformation();
	secondAccount.AccountInformation();
}

int main()
{
	
}

