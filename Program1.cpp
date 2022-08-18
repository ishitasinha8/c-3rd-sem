/*
Algorithm:
Step 1: Start
Step 2: Make a class Figure with protected data: double length, breadth, ar
Step 3: Make a default constructor to intitialise values
        Make virtual functions: virtual void accept(), virtual void area()
Step 4: Publicly derive class Triangle from Figure
Step 5: Make accept() function for triangle. Take base and height from user and store into length and breadth
        Make area() function. Compute ar = ar = (length*breadth)/2.0. Display ar
Step 6: Publicly derive class Reactangle from Figure
Step 7: Make accept() function for rectangle. Take length and breadth from user
        Make area() function. Compute ar = ar = (length*breadth)/2.0. Display ar
Step 8: Make main() function
Step 9: Declare pointer to Figure: Figure *pf
        Declare objects of derived classes: Triangle t, Rectangle r
Step 10: Assign pf = &t.
         Call pf->accept() and pf->area()
Step 12: Assign pf = &r.
         Call pf->accept() and pf->area()
Step 13: Stop
*/

#include <iostream>
using namespace std;

class Figure
{
    protected:
        double length;
        double breadth;
        double ar;
    public:
        Figure()
        {
            length = breadth = ar = 0;
        }
        virtual void accept() {}
        virtual void area() {}
};
class Triangle: public Figure
{
    public:
        void accept() 
        {
            cout<<"Enter height and base of triangle: ";
            cin>>length>>breadth;
        }
        void area()
        {
            ar = (length*breadth)/2.0;
            cout<<"Area of triangle = "<<ar<<" square units\n";
        }
};
class Rectangle: public Figure
{
    public:
        void accept() 
        {
            cout<<"Enter height and base of rectangle: ";
            cin>>length>>breadth;
        }
        void area()
        {
            ar = length*breadth;
            cout<<"Area of rectangle = "<<ar<<" square units\n";
        }
};
int main()
{
    Figure *pf;
    Triangle t;
    Rectangle r;
    
    pf = &t;
    pf->accept();
    pf->area();
    
    pf = &r;
    pf->accept();
    pf->area();
}
/*
Output:
********

Enter height and base of triangle: 6 8
Area of triangle = 24 square units
Enter height and base of rectangle: 22.2 82
Area of rectangle = 1820.4 square units

*/