//Write a C++ Program to determine the Area of Rectangle using constructors
#include <iostream>
using namespace std;
class area
{
    private:
        int length;
        int breadth;
    public:
        area()
        {
            length = 10;
            breadth = 15;
            cout<<"Length = "<<length<<" Breadth = "<<breadth<<endl;
        }
        area(area &rect)
        {
            length = rect.length;
            breadth = rect.breadth;
            cout<<"Copy constructor"<<endl;
            cout<<"Length = "<<length<<" Breadth = "<<breadth<<endl;
        }
        int calculate()
        {
            return length*breadth;
        }
        ~area()
        {
            cout<<"Destructor"<<endl;
        }
};
int main()
{
    area rect1;
    int answer = 0;

    answer = rect1.calculate();
    cout<<"Answer  = "<<answer<<endl;

    area rect2 = rect1;
    answer = rect2.calculate();
    cout<<"Answer  = "<<answer<<endl;
    
    return 0;
}