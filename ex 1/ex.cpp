#include<iostream>
#include"bankaccount.h"
using namespace std;
void main(){
	
	BankAccount ahmed("Roshdy", "121351512", 1200);
	ahmed.show();
	ahmed.withdraw(300);
	ahmed.show();
	ahmed.deposit(200);
	ahmed.show();

}