/*

Print the sum, difference and product of two complex numbers by creating a class 
named 'Complex' with separate functions for each operation whose real and imaginary parts are entered by the user.
*/
#include <iostream>
#define SIZE 3
using namespace std;
class Complex
{
	private:
		float real;
		float imag;
	public:
		void setValue(float r, float i)
		{
			real=r;
			imag=i;
		}
		void sum(Complex num[SIZE])
		{
			float rp, ip;
			int i=0;
			for(i=0;i<SIZE;i++)
			{
				rp = rp + num[i].real;
				ip = ip + num[i].imag;
			}
			cout<<"Sum = "<<rp<<" + "<<ip<<" i";
		}
};
int main()
{
	Complex num[SIZE],result;
	float a,b;
	int i=0;
	for(i=0;i<SIZE;i++)
	{
		cout<<"Enter real and imaginary part of complex number "<<i<<endl;
		cin>>a>>b;
		num[i].setValue(a,b);
	}
	result.sum(num);
}
