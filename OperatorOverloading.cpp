// File: OperatorOverloading.cpp
// Repository: Cpp_OOP_Practice
// Topic: Friend Functions and Operator Overloading in C++
// Description: Demonstrates operator overloading for the '+' operator using a friend function.
//              The class 'my' supports addition of two objects and displays the result.
#include<iostream>
using namespace std;
class my{
	private:
		int n;
	public:
		my(int num=0){
			n=num;
		}
		void display(){
			cout<<n<<endl;
		}
		friend my operator+(const my &m1,const my &m2);
};
my operator+(const my &m1,const my &m2){
	return my(m1.n+m2.n);
}
int main(){
	my m(5),m2(6),m3;
	m3=m+m2;
	m3.display();
}
