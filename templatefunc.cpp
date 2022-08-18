#include <iostream>
using namespace std;
template <class type1, class type2>
type2 add (type1 a, type2 b)
{
	return a+b;
}
int main ()
{
	cout<<"Adding 2 and 3.3 we get "<<add (2,3.3) <<endl;
	cout<<"Adding 2.2 and 3.4 we get "<<add (2.2,3.4)<<endl;
	cout<<"Adding 3.4 and 7 we get "<<add (3.4,7)<<endl;
	return 0;
}
