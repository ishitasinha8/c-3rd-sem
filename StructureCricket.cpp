/*
	Author: Ishita Sinha
	Date: 26/8/21
*/
/*
Algorithm:

Step 1: Start
Step 2: Define SIZE to be 10
Step 3: Make a structure cricket with following members:
		string to store player name
		string to store team name
		float to store batting average
		
		**For read() method**
Step 4: Make a function read to take user's input of prototype:
		void read(int n, cricket players[SIZE])
Step 5: Take a loop variable i and intitialise it to 0
Step 6: Check if i<n. If yes follow through, else go to step 9.
Step 7: Take user's inputs into players[i].playerName, players[i].teamName, players[i].battingAvg.
Step 8: Increment i by 1. Go to step 6.

		**For sort() method**
Step 9: Make a function to sort the array of structure by team name:
		void sort(int n, cricket players[SIZE])
Step 10: Declare and Initialise loop counter variable int i to 1 and j to 0.
Step 11: Make a temporary structure variable
Step 12: Check if i<n. If yes, then initialise j to 0. If no then go to step 16
Step 13: Check if j<(n-i). If yes then go to step 13. If no then go to step 15
Step 14: Check if (players[j].teamName.compare(players[j+1].teamName)>0. 
		 If yes then do the following assignment statements:
			temp = players[j];
			players[j] = players[j+1];
			players[j+1] = temp;
		 Increment j by 1. Go to step 13.
Step 15: Increment i by 1. Go to step 12.

		**For display() method**
Step 16: Make a function to display sorted details:
		 void display(int n, cricket players[SIZE])
Step 17: Take a loop variable i and intitialise it to 0
Step 18: Check if i<n. If yes follow through, else go to step 20.
Step 19: Display all details. Increment i by 1. Go to step 18.

		**For main() method**
Step 20: In the main, declare a variable to hold no. of players (noOfPlayers). Also declare a array of structures of cricket players[SIZE]
Step 21: Take no. of players to be entered from user and store it
Step 22: Call the methods read(), sort() and display() and in each pass the base address of array and noOfPlayers in the actual parameters as follows:
			read(noOfPlayers,players)
			sort(noOfPlayers,players)
			display(noOfPlayers,players)
Step 23: Stop

*/
#include <iostream>
#include <string>
#define SIZE 10
using namespace std;

struct cricket
{
	string playerName;
	string teamName;
	float battingAvg;
};
	
void read(int n, cricket players[SIZE])
{
    int i=0;
	for(i=0;i<n;i++)
    {
    	cout<<"Enter player name:"<<endl;
    	cin>>players[i].playerName;
    	cout<<"Enter "<<players[i].playerName<<"'s team name: "<<endl;
    	cin>>players[i].teamName;
    	cout<<"Enter "<<players[i].playerName<<"'s batting average score: "<<endl;
    	cin>>players[i].battingAvg;
    }
}

void sort(int n, cricket players[SIZE])
{
	int i=0,j=0;
	cricket temp;
	for(i=1;i<n;i++)
	{
		for(j=0;j<(n-i);j++)
		{
			if(players[j].teamName.compare(players[j+1].teamName)>0)
			{
				temp = players[j];
				players[j] = players[j+1];
				players[j+1] = temp;
			}
		}
	}
}
void display(int n, cricket players[SIZE])
{
    int i=0;
    for(i=0;i<n;i++)
    {
	    cout<<players[i].teamName<<"\t"<<players[i].playerName<<"\t"<<players[i].battingAvg<<endl;
    }
}
int main()
{		
	int noOfPlayers=0;
	cricket players[SIZE];
	cout<<"Enter number of players to be entered :"<<endl;
	cin>>noOfPlayers;
		
	read(noOfPlayers,players);
	sort(noOfPlayers,players);
	display(noOfPlayers,players);
}
