#ifndef bankaccount_H_
#define bankaccount_H_
#include<string>
using namespace std;
class BankAccount{
private:
	string depositor_name;
	string account_number;
	double balance;

public:
	BankAccount();
	~BankAccount();
	BankAccount(string name, string account, double balance); //allowing to create object and initialize it
	void show(); //Displaying the depositor’s name, account number, and balance
	void deposit(double money); //Depositing an amount of money given by an argument
	void withdraw(double money); //Withdrawing an amount of money given by an argument
};
#endif
