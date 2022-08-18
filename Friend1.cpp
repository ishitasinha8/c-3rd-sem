/*
Name: Ishita Sinha
Registration: 202000506

Algorithm:
**********
Step 1: Start
Step 2: Create a class DM to store distance in meters and centimeters with private variables: metre, cm (of float type)
Step 3: Create a default constructor of the class and initialise metre and cm to 0
Step 4: Create a parameterized constructor DM(float m, float c) and assign metre = m and cm = c
Step 5: Declare the friend function friend add(DM, DB)
Step 6: Make a display function to display metre and cm

Step 7: Create a class DB to store distance in feet and inches with private variables: ft, inch (of float type)
Step 8: Follow Step 3 to Step 6 and create default constructor, parametrized constructor and display function for DB class

Step 9: Create the friend function: void add(DM dm, DB db) 
Step 10: Create an object of each class: DM dmResult and DB dbResult to store results in both formats
Step 11: Declare and initialise float variables x and y to 0
Step 12: Now calculate the sum of dm.metre, dm.cm, db.ft, db.inch and store in x (in metres) as follows:
         x = dm.metre + (dm.cm * 0.01) +(db.ft * 0.3048) + (db.inch * 0.0254)
Step 13: Find the metre part and cm part of the object as follows:
         dmResult.metre = floor(x)
         dmResult.cm = (x-dmResult.metre)*100
Step 14: Call the display function to display the result of the addition in metres and centimetres by dmResult.display()
Step 15: Now we will repeat Step 12 to Step 14 for calculating feet and inches.
         i) Calculate the sum of dm.metre, dm.cm, db.ft, db.inch and store in y (in feet) as follows
            y = db.ft + (db.inch / 12) + (dm.metre * 3.28) + (dm.cm * 0.0328)
         ii) Find the metre part and cm part of the object as follows:
             dbResult.ft = floor(y)
             dbResult.inch = (y-dbResult.ft)*12
         iii) Call the display function to display the result of the addition in feet and inches by dbResult.display()
         
Step 16: In the main function, declare and initialise float num1 and num2 to 0
Step 17: Ask user to enter distance in meters and centimeters and store in num1 and num2 respectively
Step 18: Call the parametrized constructor of DM class with parameters num1 and num2: DM obj1(num1, num2)
Step 19: Ask user to enter another distance in feet and inches and store in num1 and num2 respectively
Step 20: Call the parametrized constructor of DB class with parameters num1 and num2: DB obj1(num1, num2)
Step 21: Call the friend function add(obj1, obj2)

Inputs and Outputs:
*******************
Enter first distance (in meters and centimeters): 5 2
You have entered: 5 metres and 2 centimetres.
Enter second distance (in feet and inches): 6 11
You have entered: 6 feet and 11 inches.

The sum of first and second distance is: 
7 metres and 12.82 centimetres.
23 feet and 4.5872 inches.


Enter first distance (in meters and centimeters): 0 3.2
You have entered: 0 metres and 3.2 centimetres.
Enter second distance (in feet and inches): 1 0
You have entered: 1 feet and 0 inches.

The sum of first and second distance is: 
0 metres and 33.68 centimetres.
1 feet and 1.25952 inches.

*/
#include <iostream>
#include <math.h>
using namespace std;

class DB;
class DM        
{
    private:
        float metre;
        float cm;
    public:
        DM()        //Default Constructor
        {
            metre = 0;
            cm = 0;
        }
        DM(float m, float c)        //Parametrized Constructor
        {
            metre = m;
            cm = c;
        }
        void friend add(DM, DB);
        void display()      //Display value in correct format
        {
            cout<<metre<<" metres and "<<cm<<" centimetres.\n";
        }
};

class DB
{
    private:
        float ft;
        float inch;
    public:
        DB()        //Default Constructor
        {
            ft = 0;
            inch = 0;
        }
        DB(float f, float in)        //Parametrized Constructor
        {
            ft = f;
            inch = in;
        }
        void friend add(DM, DB);
        void display()      //Display value in correct format
        {
            cout<<ft<<" feet and "<<inch<<" inches.\n";
        }
};
void add(DM dm, DB db)      //Add objects of DM class and DB class
{
    DM dmResult;
    DB dbResult;
    float x = 0, y = 0;
    
    x = dm.metre + (dm.cm * 0.01) +(db.ft * 0.3048) + (db.inch * 0.0254);       //Find the sum of the two objects and store it in dmResult (in metres and centimetres)
    dmResult.metre = floor(x);
    dmResult.cm = (x-dmResult.metre)*100;
    dmResult.display();
    
    y = db.ft + (db.inch / 12) + (dm.metre * 3.28) + (dm.cm * 0.0328);      //Find the sum of the two objects and store it in dbResult (in feet and inches)
    dbResult.ft = floor(y);
    dbResult.inch = (y-dbResult.ft)*12;
    dbResult.display();
}
int main()
{
    float num1 = 0, num2 = 0;
    
    cout<<"Enter first distance (in meters and centimeters): ";
    cin>>num1>>num2;
    DM obj1(num1, num2);            //Call obj1 of the class DM
    cout<<"You have entered: ";
    obj1.display();
    
    cout<<"Enter second distance (in feet and inches): ";
    cin>>num1>>num2;
    DB obj2(num1, num2);            //Call obj2 of the class DB
    cout<<"You have entered: ";
    obj2.display();
    
    cout<<"\nThe sum of first and second distance is: \n";
    add(obj1, obj2);                //Add the two objects using friend function
    return 0;
}