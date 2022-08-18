/*
Name: Ishita Sinha
Date: 18/8/21

Algorithm:
1. Declare variables of double type to store the number, its square root and cube root
2. Take user inputted data and store into the appropriate variable
3. Find the square root of the number using sqrt() function and store it into appropriate variable
4. Similarly, find its cube root using cbrt() function and store it into appropriate variable
*/

#include <iostream>
#include <math.h>

using namespace std;
int main()
{
	double num=0, sqrtOfNum=0, cbrtOfNum=0;
	cout<<"Enter a number"<<endl;
	cin>>num;
	sqrtOfNum = sqrt(num);
	cbrtOfNum = cbrt(num);
	
	cout<<"Square root of "<<num<<" = "<<sqrtOfNum<<endl;
	cout<<"Cube root of "<<num<<" = "<<cbrtOfNum<<endl;
	return 0;
}
