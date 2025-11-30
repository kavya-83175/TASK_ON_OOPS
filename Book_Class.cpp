/ File: Book_Class.cpp
// Repository: Cpp_OOP_Practice
// Topic: Constructors and Encapsulation in C++
// Description: Demonstrates a Book class with private members isbn and copiesAvailable.
//              Includes methods to issue a book, add copies, and check remaining copies.

#include<iostream>
using namespace std;

class Book
{
	private:
		int isbn;
		int copiesAvailable;
	public:
		string title;
		string auther;
	Book(int i,int c,string t,string a)
	{
		isbn=i;
		copiesAvailable=c;
		title=t;
		auther=a;
	}
	void issueBook(string bname)
	{
		if(title==bname)
		copiesAvailable=copiesAvailable-1;
		else
		cout<<"Book is not available"<<endl;
	}
	void addcopies(int value)
	{
		copiesAvailable=copiesAvailable+1;
	}
	int remaincopies()
	{
		return copiesAvailable;
	}
};
int main()
{
	Book b1={151,5,"maths","Ramanujan"};
	b1.issueBook("maths");
	cout<<b1.auther<<endl<<b1.remaincopies();
}
