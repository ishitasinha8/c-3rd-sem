#include <iostream>
using namespace std;
int add(int x, int y, int z)
{
    return x+y+z;
}
double add(double x, double y, double z)
{
    return x+y+z;
}
int main()
{
    cout<<add(2,3);
    cout<<add(2.2,3.3);
    return 0;
}