# Assignment-1

1. What is a class?
A class is a programming construct that defines the common state and behavior of a group of similar objects and class has its name that describe the state(data member) and services(member functions)provided by objects that are instances of that class
-Another defination 
A class is a definition of a user-defined type. A class declaration specifies how data is to be stored, and it specifies the methods (class member functions) that can be used to access and manipulate that data.

                                  ***************************************

2.How does a class accomplish abstraction, encapsulation, and datahiding?
A class accomplish abstraction by using public interface (member functions) that describe operations when you call object from a class.(member fuctions are well defined so i can use it in objects without needing implmentation details, only what i want to know how to use it and what it do)
it accomplish encapsulation (each member function in class doesn't know the implentation details of another member function. it knows only how to use it (call it i mean) ).
A data hiding (data member can be acessed only through member functions) 
-Another answer :D 
A class represents the operations you can perform on a class object with a public interface of class methods; this is abstraction.The class can use private visibility (the default) for data members, meaning that the data can be accessed only through the member functions; this is data hiding. Details of the implementation, such as data representation and method code, are hidden; this is encapsulation.

                                    ****************************************
                                    
3. What is the relationship between an object and a class?
A class as data type   (integer,float and so on ...) 
An object as variable (as int x; x as object of class int ) 
-Another detailed answer :D
A class defines a type, including how it can be used.An object is a variable or another data object, such as that produced by new, which is created and used according to the class definition.The relationship between a class and an object is
the same as that between a standard type and a variable of that type.

                                     **************************************
                                     
4. In what way, aside from being functions, are class function members different from class data members?                 
class data members are private and can access only through fuction members, but class function members are public and can be accessed through users to modify it and use them outside the class 
-Another answer :D
If you create several objects of a given class, each object comes with storage for its own set of data. But all the objects use the one set of member functions. (Typically, methods are public and data members are private, but that’s a matter of policy, not of class requirements.

                                    ***********************************
                                    
5. Define a class to represent a bank account. Data members should include the depositor’s name, the account number (use a string), and the balance. Member functions should allow the following:
n Creating an object and initializing it.
n Displaying the depositor’s name, account number, and balance
n Depositing an amount of money given by an argument
n Withdrawing an amount of money given by an argument
Just show the class declaration, not the method implementations.
(Programming Exercise 1 provides you with an opportunity to write the implementation.) Programming Exercises 559  
#include<string>
using namespace std;
class BankAccount{
private:
	string depositor_name;
	string account_number;  
	double balance; 

public:
	BankAccount(string name, string account, double bal); //allowing to create object and initialize it
	void show(); //Displaying the depositors name, account number, and balance
	void deposit(double money); //Depositing an amount of money given by an argument
	void withdraw(double money); //Withdrawing an amount of money given by an argument
};                               

                                        ****************************************
                                        
6. When are class constructors called? When are class destructors called?
A class constructors is called when you want to create object of this class or when you want to call the constructor itself.
A class destructor is called when use of object in code expires.

                                          ***************************************
                                          
7. Provide code for a constructor for the bank account class from Chapter Review Question 5.
  BankAccount::BankAccount(string name, string account, double bal ){
	depositor_name = name;
	account_number = account;
	balance = bal;
}

                                          *******************************************
                                          
 8. What is a default constructor? What is the advantage of having one?
 Default constructor is a constructor has default values and works after instance object from the class which in and that is used to create an object when you don’t provide explicit initialization values.
The advantage of having one is not needed to intialize objects when declare it ( when declare object, it intialize it with default values i set it before in class)
Another answer :D
A default constructor either has no arguments or has defaults for all the arguments.
Having a default constructor enables you to declare objects without initializing them, even if you’ve already defined an initializing constructor. It also allows you to declare arrays.

                                            **********************************
                                            
9. Modify the Stock class definition (the version in stock20.h) so that it has member functions that return the values of the individual data members. Note:A member that returns the company name should not provide a weapon for altering the array.
That is, it can’t simply return a string reference. It could return a const reference.
#ifndef STOCK30_H_
#define STOCK30_H_
#include <string>
class Stock
{
private:
	std::string company;
	int shares;
	double share_val;
	double total_val;
	void set_tot() { total_val = shares * share_val; }
public:
	Stock(); // default constructor
	Stock(const std::string & co, long n = 0, double pr = 0.0);
	~Stock(); // do-nothing destructor
	void buy(long num, double price);
	void sell(long num, double price);
	void update(double price);
	void show()const;
	const Stock & topval(const Stock & s) const;
	const std::string & com_name(){ return company; }; //new1
	int numshares(){ return shares; };            //new2
	double shareval(){ return share_val; };          //new3
	double total_val(){ return total_val; };           //new4
};
#endif

                                ******************************************
                                
10. What are this and *this?
   This is pointer points to the address of the object and *this points to object it self.
more detailed answer :D :D 
The this pointer is available to class methods. It points to the object used to invoke the method.Thus, this is the address of the object, and *this represents the bject itself.

                                       *************************************
