/ File: BankAccount_Class.cpp
// Repository: Cpp_OOP_Practice
// Topic: Constructors and Encapsulation in C++
// Description: Demonstrates a BankAccount class with private balance and accountNumber.
//  Includes deposit, withdraw, and checkbalance methods to enforce encapsulation.

#include<iostream>
using namespace std;

class BankAccount{
	private:
		float balance;
		int accountNumber;
	public:
		string holderName;
	BankAccount(float b,int a,string h)
	{
		balance=b;
		accountNumber=a;
		holderName=h;
	}
	void deposit(double amount)
	{
		if(amount>0)
		{
			balance=balance+amount;
			cout<<"Deposit : "<<amount<<endl;
		}
		else
		{
			cout<<"Invalid amount"<<endl;
		}
	}
	void withdraw(double amount)
	{
		if(amount>0)
		{
			balance=balance-amount;
			cout<<"withdraw : "<<amount<<endl;
		}
		else
		{
			cout<<"Invalid amount"<<endl;
		}
	}
	void checkbalance()
	{
		cout<<"balance : "<<balance<<endl;
	}
};
int main()
{
	BankAccount B1={5000,2411151,"Kavya"};
	cout<<B1.holderName<<endl;
	B1.withdraw(1000);
	B1.checkbalance();
}
