/*
Algorithm:
**********

Step 1: Start
Step 2: Make base class 'convert' with protected data: float val1, val2
Step 3: Make a default constructor to initialise data
        Make a function getinit() which returns val1
        Make a function getconvert() which returns val2
        Make 3 virtual functions: 
            virtual void accept() = 0
            virtual void compute() = 0
            virtual void display() = 0
Step 4: Make class 'lit_to_gal' publicly derived from convert
Step 5: Make a function: void accept() - to accept volume in litres and store in val1
        Make a function: void compute() - to compute val2 = getinit() * 0.264172
        Make a function: void display() - 
            In the display function, declare float a,b
            Assign a = getinit() and b = getconvert()
            Then display a and b with proper units
Step 6: Make class 'far_to_cel' publicly derived from convert
Step 7: Make a function: void accept() - to accept temperature in fahrenheit and store in val1
        Make a function: void compute() - to compute val2 = (getinit() - 32)*(5.0/9.0)
        Make a function: void display() - 
            In the display function, declare float a,b
            Assign a = getinit() and b = getconvert()
            Then display a and b with proper units
Step 8: Make main() function
Step 9: Declare a pointer to convert : convert *cp
        Also make objects of both derived classes:  lit_to_gal lg, far_to_cel fc
Step 10: Assign cp = &lg
         Call cp->accept()
              cp->compute()
              cp->display()
Step 11: Assign cp = &fc
         Call cp->accept()
              cp->compute()
              cp->display()
Step 12: Stop
*/
#include <iostream>
using namespace std;

class convert       //base class
{
    protected:
        float val1;
        float val2;
    public:
        convert()
        {
            val1 = val2 = 0.0f;
        }
        float getinit()
        {
            return val1;
        }
        float getconvert()
        {
            return val2;
        }
        virtual void accept() = 0;
        virtual void compute() = 0;
        virtual void display() = 0;
};
class lit_to_gal: public convert        //derived class to convert: litres to gallons
{
    public:
        void accept()
        {
            cout<<"Enter a volume in litres: ";
            cin>>val1;
        }
        void compute()
        {
            val2 = getinit() * 0.264172;
        }
        void display()
        {
            float a = 0, b = 0;
            a = getinit();
            b = getconvert();
            cout<<a<<" Litres = "<<b<<" Gallons\n";
        }
};
class far_to_cel: public convert        //derived class to convert: fahrenheit to celsius
{
    public:
        void accept()
        {
            cout<<"Enter a temperature in fahrenheit: ";
            cin>>val1;
        }
        void compute()
        {
            val2 = (getinit() - 32)*(5.0/9.0);
        }
        void display()
        {
            float a = 0, b = 0;
            a = getinit();
            b = getconvert();
            cout<<a<<" Fahrenheit = "<<b<<" Celcius\n";
        }
};
int main()
{
    convert *cp;
    lit_to_gal lg;
    far_to_cel fc;
    
    cp = &lg;
    cp->accept();
    cp->compute();
    cp->display();
    
    cp = &fc;
    cp->accept();
    cp->compute();
    cp->display();
    return 0;
}
/*
Output: 
*******

Enter a volume in litres: 100
100 Litres = 26.4172 Gallons       
Enter a temperature in fahrenheit: 98.6
98.6 Fahrenheit = 37 Celcius

*/