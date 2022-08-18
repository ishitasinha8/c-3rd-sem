/*
Algorithm:
**********

Step 1: Start
Step 2: Create a class named circle with the following data members as private
        float radius, const float PI with value as 3.14159, and float area
Step 3: Create public member functions - accept, calculate, display
Step 4: Consider the function - void accept(). Take the radius from user and store it in the radius variable
Step 5: Consider the function - void calculate(). Do the following
        area = radius*radius*PI
Step 6: Consider the function - void display(). Display the area calculated in Step 5
Step 7: Make a main function
Step 8: Make an object circle1 of the class circle
Step 9: Call the three member functions with the object:
        circle1.accept()
        circle1.calculate()
        circle1.display()
Step 10: Stop
*/
/*
Sample Input and Output
***********************

Enter the radius: 7.2
Area of circle with radius 7.2 is 162.86
*/
#include <iostream>
using namespace std;
class circle
{
    private:
        float radius;
        const float PI = 3.14159;
        float area;
    public:
        void accept()
        {
            cout<<"Enter the radius: ";
            cin>>radius;
        }
        void calculate()
        {
            area = PI * radius * radius;
        }
        void display()
        {
            cout<<"Area of circle with radius "<<radius<<" is "<<area;
        }
};
int main()
{
    circle circle1;
    circle1.accept();
    circle1.calculate();
    circle1.display();
    return 0;
}