#include<iostream>
#include<string>
#include"bankaccount.h"
using namespace std;
BankAccount::BankAccount(){
	
	depositor_name = "No Name";
	account_number = "000000";
	balance = 0;
}
BankAccount::~BankAccount(){
	cout << "Bye, " << depositor_name << "! \n";
}
BankAccount::BankAccount(string name, string account, double bal){
	depositor_name = name;
	account_number = account;
	balance = bal;
	cout << "Welcome, " << depositor_name << "! \n";
}
void BankAccount::show(){
	cout << "Depositer's Name : " << depositor_name << "\t";
	cout << "Account number : " << account_number<<"\t";
	cout << "balance : " << balance <<"\n";
}
void BankAccount::deposit(double money){
	balance = balance + money;
}
void BankAccount::withdraw(double money){
	balance = balance - money;
}


