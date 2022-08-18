/*
Name: Ishita Sinha
Registration: 202000506

Algorithm:
**********
Step 1: Start
Step 2: Make a class twoValues with private data members: int a and int b
Step 3: Make a default constructor to initialise the data members to 0
Step 4: Make a function void setValue() to take values from user and store them into the data members.
Step 5: Declare class Min_Max as a friend class of this class
Step 6: Define the class Min_max
Step 7: Make a function to get the minimum between two values as follows:
            int getMin(twoValues obj)
Step 8: Inside the function, get the minimum value between obj.a and obj.b as follows:
            num = (obj.a<obj.b)?(obj.a):(obj.b)
Step 9: Return num to main
Step 10: Make a function to get the maximum between two values as follows: 
            int getMax(twoValues obj)
Step 11: Inside the function, get the maximum value between obj.a and obj.b as follows:
            num = (obj.a>obj.b)?(obj.a):(obj.b)
Step 12: Return num to main
Step 13: In the main, declare int min and int max.
Step 14: Make an object of each class as follows:
            twoValues obj;
            Min_Max min_max;
Step 15: Call obj.setValue() to store values in obj.a and obj.b
Step 16: Call min_max.getMin(obj) and store result in min. Then display min
Step 16: Call min_max.getMax(obj) and store result in max. Then display max
Step 17: Stop

Input and Output:
*****************
Enter two numbers: 10 30
The minimun value is: 10
The maximum value is: 30


Enter two numbers: 5000 30
The minimun value is: 30
The maximum value is: 5000
*/
#include <iostream>
using namespace std;
class Min_Max;
class twoValues         //Class to store two integer data
{
    private:
        int a;
        int b;
    public:
        twoValues()         //Default Constructor 
        {
            a = 0;
            b = 0;
        }
        void setValue()     //Take values into a and b
        {
            cout<<"Enter two numbers: ";
            cin>>a>>b;
        }
        friend class Min_Max;
};
class Min_Max
{
    public:
        int getMin(twoValues obj)       //Find the minimum value between obj.a and obj.b
        {
            int num = 0;
            num = (obj.a<obj.b)?(obj.a):(obj.b);
            return num;
        }
        int getMax(twoValues obj)      //Find the maximum value between obj.a and obj.b
        {
            int num = 0;
            num = (obj.a>obj.b)?(obj.a):(obj.b);
            return num;
        }
};
int main()
{
    int min = 0, max = 0;
    twoValues obj;
    Min_Max min_max;
    
    obj.setValue();             //Take values into obj.a and obj.b
    
    min = min_max.getMin(obj);  //Find the minimum value
    cout<<"The minimun value is: "<<min<<endl;
    
    max = min_max.getMax(obj);  //Find the maximum value
    cout<<"The maximum value is: "<<max<<endl;
}