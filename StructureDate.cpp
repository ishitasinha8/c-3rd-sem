/*
Author: Ishita Sinha
Date: 26/8/2021
*/
/*
Algorithm:

Step 1: Start
Step 2: Make a structure 'Date' with following members of int type:
		day
		month
		year
		
		**For read() method**
Step 3: Make a function with prototype:
		struct Date read()  to take input from user in the form dd/mm/yyyy
Step 4: Declare a structure variable of Date called date which holds the inputs
Step 5: return date

		**For validate() method**
Step 6: Make a function with prototype:
		int validate(struct Date date)  to validate the date with checks
Step 7: Intitialise variable flag of integer type to 0
Step 8: Check the condition 
		(date.day<=0||date.month<=0||date.year<=0||date.month>12||date.year>9999) is true or false
		If it is true, i=flag and go to Step 14. Else go to next step
Step 9: Check the condition
		(date.month==1||date.month==3||date.month==5||date.month==7||date.month==8||date.month==10||date.month==12)&&(date.day>31)
		If it is true, i=flag and go to Step 14. Else go to next step
Step 10: Check the condition
		(date.month==4||date.month==6||date.month==9||date.month==11)&&(date.day>30)
		If it is true, i=flag and go to Step 14. Else go to next step
Step 11: Check the condition (date.month==2) If it is true go to next step else go to step 14
Step 12: Check the condition
		(date.day>29 && (date.year%400==0 ||(date.year%4==0 && date.year%100!=0))
		If it is true, i=flag and go to Step 14. Else go to next step
Step 13: Check the condition
		(date.day>28&&(date.year%4!=0||(date.year%100==0&&date.year%400!=0))
		If it is true, i=flag and go to next step
Step 14: return flag to main

		**For display() method**
Step 15: Make a function with prototype:
		display(struct Date date)
Step 16: As per the date.month being 1, 2,....,12 display January, February,....,December with an else if ladder
Step 17: Display the date.day and date.year

		**For main() method**
Step 18: Declare a variable choice to hold user's choice and a variable validity to check the validity of the date
Step 19: Make a structure variable date 
Step 20: Call the read() function and store its return value in 'date'
Step 21: Call validatef() function with parameter 'date' and store its return value in validity
Step 22: Check if validity=1. If true, print that date is invalid, else call the display() function with parameter date
Step 23: Ask user if they want to enter again and hold their choice in 'choice' variable
Step 24: Check if choice==1. If true then go to step 20
Step 25: Stop
*/
#include <iostream>
using namespace std;
struct Date		//struct with members daay, month and year to hold the date
{
    int day;
    int month;
    int year;
};
struct Date read()	//Take the user's input, store it and pass it to the main
{
    struct Date date;
    cout<<"Enter day month year in dd mm yyyy format:";
    cin>>date.day>>date.month>>date.year;
    return date;
}
int validate(struct Date date)		//Check the validity of the date
{
    int flag=0;
    /*
    validate day
    if date.day<=0 or date.day >=31
    return -1;
    
    */
    if(date.day<=0||date.month<=0||date.year<=0||date.month>12||date.year>9999)		//Check if the values entered are negative or non-existent
    {
        flag=1;
    }
    else if((date.month==1||date.month==3||date.month==5||date.month==7||date.month==8||date.month==10||date.month==12)&&(date.day>31))	//Check for months that have 31 days
    {
        flag=1;
    }
    else if((date.month==4||date.month==6||date.month==9||date.month==11)&&(date.day>30))	//Check for months that have 30 days
    {
        flag=1;
    }
    else if(date.month==2)		//Check for February in case of leap/non-leap years days
    {	
    	//A leap year is which is divisible by 4. In case of century years (ending with 00 - eg. 2000), leap years should be divisible by 400 but not 100
        if(date.day>29 && (date.year%400==0 ||(date.year%4==0 && date.year%100!=0)))		//Check for leap years to have not more than 29 days in February
        {
        	flag=1;
        }
        else if(date.day>28&&(date.year%4!=0||(date.year%100==0&&date.year%400!=0)))		//Check for non-leap years to have not more than 28 days in February
        {
        	flag=1;
        }
    }
    return flag;
}
void display(struct Date date)		//Display date
{		//Print the month (in words) as per the month (in number) entered
	switch(date.month)
	{
		case 1:
			cout<<"January ";
			break;
		case 2:
			cout<<"February ";
			break;
		case 3:
			cout<<"March ";
			break;
		case 4:
			cout<<"April ";
			break;
		case 5:
			cout<<"May ";
			break;
		case 6:
			cout<<"June ";
			break;
		case 7:
			cout<<"July ";
			break;
		case 8:
			cout<<"August ";
			break;
		case 9:
			cout<<"September ";
			break;
		case 10:
			cout<<"October ";
			break;
		case 11:
			cout<<"November ";
			break;
		case 12:
			cout<<"December ";
			break;
	} 
    cout<<date.day<<" "<<date.year<<endl;
}

int main()
{
    int choice = 0, validity=0;
    do
    {
        struct Date date;
        date = read();
        validity = validate(date);
        if(validity==1)							//Check if date is valid/not valid and display as necessary
            cout<<"Date is not valid."<<endl;
        else
        {
            display(date);
        }
        cout<<"Would you like to enter again?Enter 1 to enter again and any other letter to exit"<<endl; //Ask user if they want to repeat the process and make a check for it
        cin>>choice;
    }while(choice==1);
	return 0;
}
