#include <iostream>
using namespace std;
class constAndDest
{
    private:
        int x;
        int y;
    public:
        constAndDest()
        {
            x=10;
            y=15;
            cout<<"x = "<<x<<" y = "<<y<<endl;
            cout<<"Constructor 1 called..\n";
        }
        constAndDest(int x1)
        {
            x=10;
            y=15;
            cout<<"x = "<<x<<" y = "<<y<<endl;
            cout<<"Constructor 2 called..\n";
        }
        constAndDest(int x1, int x2)
        {
            x = x1;
            y = x2;
            cout<<"x = "<<x<<" y = "<<y<<endl;
            cout<<"Constructor 3 called..\n";
        }
        constAndDest(const constAndDest &obj)
        {
            x = obj.y;
            y = obj.x;
            cout<<"x = "<<x<<" y = "<<y<<endl;
            cout<<"Copy constructor..\n";
        }
        int add()
        {
            return x+y;
        }
        /*~constAndDest()
        {
            x=y=0;
            cout<<"x = "<<x<<" y = "<<y<<endl;
            cout<<"Object is destroyed..\n";
        }*/
};
int main()
{
    constAndDest obj1;
    constAndDest obj2(30,40);
    constAndDest obj3 = obj1;
    int sum = 0;
    
    /*sum = obj2.add();
    cout<<"The sum is = "<<sum<<endl;
    
    sum = obj1.add();
    cout<<"The sum is = "<<sum<<endl;*/
    
    return 0;
}