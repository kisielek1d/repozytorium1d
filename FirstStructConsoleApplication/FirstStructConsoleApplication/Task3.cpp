#include<iostream>

using namespace std;

struct bankAccount
{
	double balance;
	string owner;
	string currency;
};

void accountInformation(bankAccount& account)
{
	cout << "Informacja o koncie bankowym. \n";
	cout << "W³aœciciel: " << account.owner << "\n";
	cout << "Saldo" << account.balance << " " << account.currency << "\n";
}

void depositToAccount(bankAccount& account, double amount)
{
	account.balance = account.balance + amount;
}

void withdrawlFromAccount(bankAccount& account, double amount)
{
	account.balance = account.balance - amount;
}

void task3()
{
	bankAccount firstAccount;
	firstAccount.balance = 10000;
	firstAccount.currency = "z³";
	firstAccount.owner = "Jan Kowalski";


	cout << "Informacja o koncie bankowym: \n";
	cout << "W³aœciciel: " << firstAccount.owner << "\n";
	cout << "Saldo: " << firstAccount.balance << "\n";

	accountInformation(firstAccount);

	bankAccount secondAccount;
	secondAccount.balance = 15000;
	secondAccount.currency = "z³";
	secondAccount.owner = "Ewa Nowak";

	accountInformation(secondAccount);

	depositToAccount(firstAccount, -14, 50);
	accountInformation(firstAccount);
}