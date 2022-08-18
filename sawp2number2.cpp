/*
Name: Ishita Sinha
Date: 18/8/21

Algorithm:

1. Declare 2 variables (say num1 and num2) to hold user input
2. Take user's input and store it in the variables
3. Swap the variables by
	a. Assign num1+num2 to num1
	b. Assign num1-num2 to num2
	c. Assign num1-num2 to num1
4. Print the results
*/
#include <iostream>
using namespace std;
int main()
{
	int num1=0, num2=0;
	cout<<"Enter 2 numbers"<<endl;										//Ask user to enter the numbers
	cin>>num1>>num2;
	
	cout<<"Before Swapping num1 = "<<num1<<" and num2 = "<<num2<<endl;	//Print the numbers before swapping
	
	num1=num1+num2;														//Swap the numbers
	num2=num1-num2;
	num1=num1-num2;
	
	cout<<"After Swapping num1 = "<<num1<<" and num2 = "<<num2<<endl;	//Print the swapped numbers
	
	return 0;
}
