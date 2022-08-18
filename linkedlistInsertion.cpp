/*
Algorithm:
***********

Step 1: Start
Step 2: Make a class NODE with public data: int data, NODE *link
Step 3: Make a default constructor to initialise the data: NODE(){ data = 0; link = NULL; }
Step 4: Make a class LIST which is publicly inherited from NODE class
Step 5: In LIST class, make a pointer to NODE of name head and static int count (to keep count of number of nodes created)

Step 6: Make a function: void insertAtPos(int num, int pos)
Step 7: Declare *newNode of NODE type with new operator. Also declare *temp of node type
Step 8: Assign data part of newNode as num: newNode->data = num;
Step 9: Check if (pos<=0 || (pos>(count+1)))
            If yes, display "position does not exist" and go to step 17
            Otherwise, go to next step
Step 10: Check if(pos==1 || head==NULL)
            If yes, go to step 11
            Otherwise, go to step 12
Step 11: Do the following assignments: 
            Make the link part of newNode as head: newNode->link = head
            Make head as newNode: head = newNode
         Go to step 17
Step 12: Declare and intialise loop counter variable i = 2
Step 13: Check if (i<pos). If yes, go to next step. Else, go to step 16
Step 14: Assign temp = temp->link. Increment i by 1. Go to step 13.
Step 15: Do the following assignments: 
            Make link part of newNode as temp->link: newNode->link = temp->link
            Make temp->link point to newNode: temp->link = newNode
Step 16: Increment count by 1

Step 17: Make a function: void display()
Step 18: Make a pointer "*temp" of type NODE and assign it to head
Step 19: Check if (temp!=NULL). If yes, go next step. Else, go to step 22
Step 20: Display temp->data
Step 21: Assign temp = temp->link. Go to step 19
Step 22: Make the main method
Step 23: Make an object l1 of LIST class
Step 24: Declare integer variables: ch = 1, data = 0, pos = 0
Step 25: Make a menu-driven switch-case inside the loop
Step 26: In case 1, take "data" and "pos" from user and call: l1.insertAtPos(data,pos)
Step 27: In case 2, call l1.display();
Step 28: Stop
*/

#include <iostream>
using namespace std;

class NODE          //Make nodes of linked-list
{
    public:
        int data;
        NODE *link;
    public:
        NODE()
        {
            data = 0;
            link = NULL;
        }
};
class LIST:public NODE      //Make functions to insert an element and display the list
{
    private: 
        NODE *head = NULL;
        static int count;
    public:
        void insertAtPos(int num, int pos)      //function to insert element in list
        {
            NODE *newNode = new NODE;
            NODE *temp = head;
            newNode->data = num;
            if(pos<=0 || (pos>(count+1)))
            {
                cout<<"This position does not exist.\n";
            }
            else
            {
                if(pos==1||head==NULL)
                {
                    newNode->link = head;
                    head = newNode;
                }
                else
                {
                    for(int i = 2;i<pos;i++)
                    {
                        temp = temp->link;
                    }
                    newNode->link = temp->link;
                    temp->link = newNode;
                }
                cout<<num<<" has been inserted.\n";
                count++;
            }
        }
        void display()              //function to display list
        {
            NODE *temp = head;
            cout<<"The list is: ";
            while(temp!=NULL)
            {
                cout<<temp->data<<" ";
                temp = temp->link;
            }
            cout<<"\n";
        }
};
int LIST::count = 0;
int main()          //menu-driven main method
{
    LIST l1;
    int ch = 1, data = 0, pos = 0;
    do
    {
        cout<<"\n1. Insert at any position\n2. Display list\n3. Exit\n";
        cout<<"Enter your choice: ";
        cin>>ch;
        switch(ch)
        {
            case 1:
                cout<<"Enter a data and position: ";
                cin>>data>>pos;
                l1.insertAtPos(data,pos);
                break;
            case 2: 
                l1.display();
                break;
            case 3:
                break;
            default:
                cout<<"Enter choice between 1 and 3\n";
        }
    }while(ch!=3);
}
/*
Output:
*******


1. Insert at any position
2. Display list
3. Exit
Enter your choice: 1
Enter a data and position: 10 1
10 has been inserted.

1. Insert at any position
2. Display list
3. Exit
Enter your choice: 1
Enter a data and position: 20 1
20 has been inserted.

1. Insert at any position
2. Display list
3. Exit
Enter your choice: 1
Enter a data and position: 15 2
15 has been inserted.

1. Insert at any position
2. Display list
3. Exit
Enter your choice: 2
The list is: 20 15 10 

1. Insert at any position
2. Display list
3. Exit
Enter your choice: 3
*/