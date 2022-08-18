/*
Author: Ishita Sinha
Date: 23/8/21
*/
/*
Algorithm
*********

Step 1: Start
Step 2: Define SIZE to be 5
Step 3: Make a structure with following members:
		city variable of character array type
		population of long integer type
		literacy of floating point number type
Step 4: Make an array of structure variable 'cities' to hold 5 cities
			
Step 5: Make a function to take the input data from the console called read()
Step 6: Declare and Initialise loop counter variable int i to 0.
Step 7: Check the condition i<SIZE. If yes then read the city name, population and literacy from user. If no then go to step 9.
Step 8: Increment i by 1. Go to step 7.
				
Step 9: Make a function to sort the array of structure alphabetically by city name called sort().
Step 10: Declare and Initialise loop counter variable int i to 1 and j to 0.
Step 11: Check if i<SIZE. If yes, then initialise j to 0. If no then go to step 15
Step 12: Check if j<(SIZE-i). If yes then go to step 13. If no then go to step 14
Step 13: Check if strcmp(cities[j].city,cities[j+1].city)>0. If yes then do the following assignment statements:
			temp = cities[j]
			cities[j] = cities[j+1]
			cities[j+1] = temp
		 Increment j by 1. Go to step 12.
Step 14: Increment i by 1. Go to step 11
				
Step 15: Make a function to display the data called display()
Step 16: Declare and Initialise loop counter variable int i to 0.
Step 17: Check the condition i<SIZE. If yes then display city name, population and literacy. If no then go to step 18.
Step 18: Increment i by 1. Go to step 7.
Step 19: Make a main() function to call all the functions read(), sort(), display().
Step 20: Stop
*/

#include <iostream>
#include <cstring>
#define SIZE 1
using namespace std;

struct census			//Make a structure to store name, population and literacy of the city
{
	char city[20];
	long int population;
	float literacy;
}cities[SIZE],temp;
	
void read()				//Read the city details from the user
{
	int i=0;
	for(i=0;i<SIZE;i++)
	{
		cout<<"Enter name of city: "<<endl;
		cin>>cities[i].city;
		cout<<"Enter population of city: "<<endl;
		cin>>cities[i].population;
		cout<<"Enter literacy of city: "<<endl;
		cin>>cities[i].literacy;
	}
}
void sort()				//Sort the array of structure alphabetically by city name using string compare function
{
	int i=0,j=0;
	for(i=1;i<SIZE;i++)
	{
		for(j=0;j<(SIZE-i);j++)
		{
			if(strcmp(cities[j].city,cities[j+1].city)>0)
			{
				temp = cities[j];
				cities[j] = cities[j+1];
				cities[j+1] = temp;
			}
		}
	}
}
void display()			//Display the sorted and formatted data
{
	int i=0;
	cout<<"The city details are: "<<endl;
	cout<<"Names\t\t Population\t\t Literacy"<<endl;
	for(i=0;i<SIZE;i++)
	{
		cout<<i+1<<". "<<cities[i].city<<"\t \t"<<cities[i].population<<"\t \t"<<cities[i].literacy<<endl;
	}
}
int main()				//Make a main function to call all the methods created
{
	read();
	sort();
	display();
	return 0;	
}
