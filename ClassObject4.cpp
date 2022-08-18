/*
Algorithm:
**********

Step 1: Start
Step 2: Make a class named record and declare private data members:
        string name
        int regNo to hold Registration Number
        float marks[3] to hold marks for 3 subjects and avg variable to hold the average
Step 3: Inside the class, declare public member functions: read(int i), calcAvg(), display(int i)
Step 4: In read() function, take the name, regNo, and marks for 3 subjects in marks[] array
Step 5: In calcAvg() function calculate the average of 3 subjects and store in avg as follows:
        avg = (marks[0] + marks[1] + marks[2])/3
Step 6: In display() function, display name, regNo and avg

****For main() method****
Step 7: In the main function, declare SIZE variable of const int type and initialise to 3
Step 8: Make an array of object of the class record student[SIZE]
Step 9: Declare loop counter variable i
Step 10: Check if i<SIZE. If yes, follow through, else go to step 13.
Step 11: Call the functions:
         student[i].read(i)
         student[i].calcAvg()
Step 12: Increment i by 1. Go to step 10.
Step 13: i=0
Step 14: Check if i<SIZE. If yes, follow through, else go to step 17.
Step 15: Call the function:
         student[i].display(i)
Step 16: Increment i by 1. Go to step 14.
Step 17: Stop
*/
/*
*/
#include <iostream>
using namespace std;
class record
{
    private:
        string name;
        int regNo;
        float marks[3];
        float avg;
    public:
        void read(int i)
        {
            cout<<"Enter Name of Student "<<i+1<<": ";
            cin>>name;
            cout<<"Enter "<<name<<"'s registration Number: ";
            cin>>regNo;
            cout<<"Enter "<<name<<"'s Marks in C++, Data Structure and Digital Circuit respectively: ";
            cin>>marks[0]>>marks[1]>>marks[2];
        }
        void calcAvg()
        {
            avg = (marks[0] + marks[1] + marks[2])/3;
        }
        void display(int i)
        {
            cout<<i+1<<". \t"<<name<<"\t"<<regNo<<"\t\t"<<avg<<endl;
        }
};
int main()
{
    const int SIZE = 3;
    int i=0;
    record student[SIZE];
    for(i=0;i<SIZE;i++)
    {
        student[i].read(i);
        student[i].calcAvg();
    }
    for(i=0;i<SIZE;i++)
    {
        if(i==0)
        {
            cout<<"Sl.\tName\tRegistration Number\tAverage Marks\n";
        }
        student[i].display(i);
    }
    return 0;
}