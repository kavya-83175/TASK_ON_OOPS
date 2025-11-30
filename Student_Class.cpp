// File: Student_Class.cpp
// Repository: Cpp_OOP_Practice
// Topic: Constructors and Encapsulation in C++
// Description: Demonstrates the use of private members, public methods, and constructors
//              in a Student class. Includes getter and setter methods to enforce encapsulation.
#include<iostream>
using namespace std;

class Student{
	private:
		int rollno;
		float marks;
	public:
		string name;
		string branch;
	Student(int r,float m,string n,string b)
	{
		rollno=r;
		marks=m;
		name=n;
		branch=b;
	}
	void setmarks(float m)
	{
		if(m>=0 && m<=100)
		marks=m;
		else
		cout<<"Invalid marks"<<endl;
	}
	float getmarks()
	{
		return marks;
	}
	int getrollno()
	{
		return rollno;
	}
};
int main()
{
	Student s1={ 151,53.5,"Kavya","DS"};
	s1.setmarks(65);
	cout<<s1.name<<endl<<s1.getrollno()<<endl<<s1.getmarks()<<endl<<s1.branch;
}
