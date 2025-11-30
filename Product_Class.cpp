// File: Product_Class.cpp
// Repository: Cpp_OOP_Practice
// Topic: Constructors and Encapsulation in C++
// Description: Demonstrates a Product class with private price and stock members.
//              Includes getter and setter methods to enforce encapsulation and validate values.

#include<iostream>
using namespace std;

class Product
{
	private:
		double price;
		int stock;
	public:
		string productName;
		string category;
	Product(double p,int s,string pN,string c)
	{
		price=p;
		stock=s;
		productName=pN;
		category=c;
	}
	void setprice(double p)
	{
		if(p>0)
		price=p;
		else
		cout<<"Invalid price"<<endl;
	}
	double getprice()
	{
		return price;
	}
	void setstock(int s)
	{
		if(s>0)
		stock=s;
		else
		cout<<"Invalid Stock"<<endl;
	}
	int getstock()
	{
		return stock;
	}
};
int main()
{
	Product p1={ 15000,50,"AC","electronics"};
	p1.setprice(5000);
	p1.setstock(30);
	cout<<p1.productName<<endl<<p1.category<<endl<<p1.getprice()<<endl<<p1.getstock()<<endl;
}
