/*
Name: Ishita Sinha
Date: 18/8/21

Algorithm:

1. Declare 2 variables (say num1 and num2) to hold user input and a temporary variable
2. Take user's input and store it in the variables
3. Swap the variables by
	a. Assign num1 to temp
	b. Assign num2 to num1
	c. Assign temp to num2
4. Print the results
*/

#include <iostream>
using namespace std;
int main()
{
	int num1=0, num2=0, temp=0;
	
	cout<<"Enter two numbers"<<endl;								//Ask user to enter the numbers
	cin>>num1>>num2;
	
	cout<<"Before Swapping num1 = "<<num1<<" and num2 = "<<num2;	//Print the numbers before swapping
	cout<<endl;
	
	temp=num1;														//Swap the numbers using a temporary variable "temp"
	num1=num2;
	num2=temp;
	cout<<"After Swapping num1 = "<<num1<<" and num2 = "<<num2;		//Print the swapped numbers
}
