/*
Algorithm:
**********

Step 1: Start
Step 2: Make a class named EMPLOYEE and declare private data members:
        employee_number of integer type
        employee_name of string type
        basic of integer type to hold basic salary
        da (for dearness allowance), it (for income tax), gross_sal and net_sal all of float type
Step 3: Inside the class, declare public member functions: read(int i), calculate(), display(int i)
Step 4: Define the read() function using the scope resolution operator as follows:
        void EMPLOYEE::read(int i)
Step 5: In the function, Take in the name, employee number and basic salary of employee number i
Step 6: Define the calculate() function using the scope resolution operator as follows:
        void EMPLOYEE::calculate()
Step 7: Do the following operations to calculate da, it, gross_sal and net_sal
        da = 0.52 * basic
        gross_sal = basic + da
        it = 0.3 * basic
        net_sal = gross_sal - it
Step 8: Define the display() function using the scope resolution operator as follows:
        void EMPLOYEE::display(int i)
Step 9: Display name, employee number and net salary of employee number i

 ****For main() method****
Step 10: In the main function, declare SIZE variable of const int type and initialise to 3
Step 11: Make an array of object of the class EMPLOYEE emp[3]
Step 12: Declare loop counter variable i
Step 13: Check if i<SIZE. If yes, follow through, else go to step 16.
Step 14: Call the functions:
         emp[i].read(i)
         emp[i].calculate()
Step 15: Increment i by 1. Go to step 13.
Step 16: i=0
Step 17: Check if i<SIZE. If yes, follow through, else go to step 20.
Step 18: Call the function:
         emp[i].display(i)
Step 19: Increment i by 1. Go to step 17.
Step 20: Stop
*/
/*
Sample Input and Output:
************************

Enter details of employee 1
Enter your name:Rekha
Enter Rekha's employee number: 45094
Enter Rekha's basic salary: 45000
Enter details of employee 2
Enter your name:Raj
Enter Raj's employee number: 34853
Enter Raj's basic salary: 30000
Enter details of employee 3
Enter your name:Tina
Enter Tina's employee number: 38570
Enter Tina's basic salary: 27500

Sl.	Name	Employee Number	Net Salary
1. 	Rekha	45094		    54900
2. 	Raj	    34853		    36600
3. 	Tina	38570		    33550

*/
#include <iostream>
using namespace std;
class EMPLOYEE
{
    private:
        int employee_number;
        string employee_name;
        int basic;
        float da;
        float it;
        float gross_sal;
        float net_sal;
    
    public:
        void read(int i);
        void calculate();
        void display(int i);
};
void EMPLOYEE::read(int i)
{
    cout<<"Enter details of employee "<<i+1<<endl;
    cout<<"Enter your name:";
    cin>>employee_name;
    cout<<"Enter "<<employee_name<<"'s employee number: ";
    cin>>employee_number;
    cout<<"Enter "<<employee_name<<"'s basic salary: ";
    cin>>basic;
}
void EMPLOYEE::calculate()
{
    da = 0.52 * basic;
    gross_sal = basic + da;
    it = 0.3 * basic;
    net_sal = gross_sal - it;
}
void EMPLOYEE::display(int i)
{
    cout<<i+1<<". \t"<<employee_name<<"\t"<<employee_number<<"\t\t"<<net_sal<<endl;
}
int main()
{
    const int SIZE = 3;
    EMPLOYEE emp[3];
    int i=0;

    for(i=0;i<SIZE;i++)
    {
        emp[i].read(i);
        emp[i].calculate();
    }
    for(i=0;i<SIZE;i++)
    {
        if(i==0)
        {
            cout<<"Sl.\tName\tEmployee Number\tNet Salary\n";
        }
        emp[i].display(i);
    }
    
    return 0;
}