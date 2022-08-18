#include <iostream>
using namespace std;
class average
{
    private:
        int x;
    public:
        float findAvg(int a, int b)
        {
            float avg;
            avg = (a+b)/2;
            cout<<"int int\n";
            return avg;
        }
        float findAvg(int a, int b, int c)
        {
            float avg;
            avg = (a+b+c)/2;
            cout<<"int int int\n";
            return avg;
        }
        float findAvg(int a, float b)
        {
            float avg;
            avg = (a+b)/2;
            cout<<"int float\n";
            return avg;
        }
        float findAvg(float a, int b)
        {
            float avg;
            avg = (a+b)/2;
            cout<<"float int\n";
            return avg;
        }
};
int main()
{
    average num;
    float avg=0;
    float c=30;
    avg = num.findAvg(10,20);
    cout<<"Average of 10 and 20 is "<<avg<<endl;
    avg = num.findAvg(10,20,30);
    cout<<"Average of 10, 20 and 30 is "<<avg<<endl;
    avg = num.findAvg(10,(float)30);
    cout<<"Average of 10 and 30 is "<<avg<<endl;
    avg = num.findAvg((float)10,30);
    cout<<"Average of 10 and 30 is "<<avg<<endl;
    return 0;
}