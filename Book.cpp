#include<iostream>
#include<iomanip>
using namespace std;
struct Book{
	int Book_ID;
	int Book_Pages;
	double Book_Price;
};
int main()
{
	// Array to store book infomation
	Book books[5];
	for(int i=0;i<5;i++)
	{
		cout<<" Enter the information for book "<<i+1<<endl;
		cout<<" Book ID : "<<endl;
		cin>>books[i].Book_ID;
		cout<<" Book Pages: "<<endl;
		cin>>books[i].Book_Pages;
		cout<<" Book Price: "<<endl;
		cin>>books[i].Book_Price;
		cout<<endl;
	}
	// Display Book Information
	cout<<" Book Information: "<<endl;
	cout<<setw(15)<<" Book ID "<<setw(15)<<" Book Pages "<<setw(15)<<" Book Price "<<endl;
	for(int i=0;i<5;i++)
	{
		cout<<setw(15)<<books[i].Book_ID<<setw(15)<<books[i].Book_Pages<<setw(15)<<books[i].Book_Price<<endl;
	}
	cout<<endl;
	// Book with maximum price
	int High=books[0].Book_Price;
	for(int i=0;i<5;i++)
	{
		if(High<books[i].Book_Price)
		{
			High=books[i].Book_Price;
		}
	}
	cout<<"Book with Maximum Price: "<<High<<endl;
	// Book with minimum price
	int mini=books[0].Book_Price;
	for(int i=0;i<5;i++)
	{
		if(mini>books[i].Book_Price)
		{
			mini=books[i].Book_Price;
		}
	}
	cout<<" Book with minimum price: "<<mini;
}