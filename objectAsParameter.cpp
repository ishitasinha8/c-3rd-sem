//WAP to pass 3 object as parameter to a function and find its average
#include <iostream>
using namespace std;
class data
{
    private:
        int a;

    public:
        void setData(int x)
        {
            a=x;
        }
        float findAvg(data obj1, data obj2, data obj3)
        {
            float avg= 0;
            avg = ( obj1.a + obj2.a + obj3.a )/3;
            return avg;
        }
};
int main()
{
    data data1, data2, data3;
    int a=0,b=0,c=0;
    float avg=0;
    cout<<"Enter 3 integers: ";
    cin>>a>>b>>c;

    data1.setData(a);
    data2.setData(b);
    data3.setData(c);
    avg = data1.findAvg(data1, data2, data3);
    cout<<"Average is "<<avg;
    return 0;
}