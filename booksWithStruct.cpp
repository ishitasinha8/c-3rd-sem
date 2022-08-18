#include <iostream>
#include <cstring>
using namespace std;



int main()
{
	struct book{
		string name;
		float price;
		int pages;
	};
	
	book book1;
	cout<<"Enter the name of the book\n";
	cin>>book1.name;
	cout<<"Enter the price of the book\n";
	cin>>book1.price;
	cout<<"Enter the no. of pages in the book\n";
	cin>>book1.pages;
	cout<<"Book Name: "<<book1.name<<endl<<"Price: "<<book1.price<<endl<<"Pages: "<<book1.pages<<endl;
	return 0;
}
