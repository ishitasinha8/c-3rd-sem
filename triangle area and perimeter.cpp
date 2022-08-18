//Write a program to 
//print the area and perimeter of a triangle having sides of 3, 4 and 5 units by creating a class named 'Triangle' 
//with a function to print the area and perimeter.
#include <iostream>
#include <cmath>
using namespace std;
class Triangle
{
	private:
		float perimeter;
		float area;
	public:
		float findPerimeter(int a, int b, int c)
		{
			perimeter=a+b+c;
			return perimeter;
		}
		float findArea(int a, int b, int c)
		{
			float semiperi;
			semiperi=perimeter/2;
			area=sqrt(semiperi*(semiperi-a)*(semiperi-b)*(semiperi-c));
			return area;
		}
};
int main()
{
	Triangle triangle1;
	float perimeter=0,area=0;
	perimeter = triangle1.findPerimeter(3,4,5);
	area = triangle1.findArea(3,4,5);
	cout<<"Perimeter = "<<perimeter<<" and Area = "<<area;
}
