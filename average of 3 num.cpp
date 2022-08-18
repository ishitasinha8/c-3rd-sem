/*
Print the average of three numbers entered by the user by creating a class named 'Average' 
having a function to calculate and print the average without creating any object of the Average class.
*/
#include <iostream>
using namespace std;
class Average
{
	public:
		static float getAvg(int a, int b, int c)
		{
			float avg;
			avg=(a+b+c)/3;
			return avg;
		}
};
int main()
{
	int num1,num2,num3;
	float avg;
	cin>>num1>>num2>>num3;
	avg = Average::getAvg(num1,num2,num3);
	cout<<avg;
}

/*
Other method
************
Print the average of three numbers entered by the user by creating a class named 'Average' 
having a function to calculate and print the average without creating any object of the Average class.

#include <iostream>
using namespace std;
class Average
{
    static int avg;
	public:
		static void getAvg(int a, int b, int c)
		{
			avg=(a+b+c)/3;
			cout<<avg;
		}
};
    int Average::avg;
int main()
{

	int num1,num2,num3;
	cin>>num1>>num2>>num3;
	Average::getAvg(num1,num2,num3);
}

*/
