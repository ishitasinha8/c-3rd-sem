#include <iostream>
using namespace std;
class box
{
	private:
		int length;
		int breadth;
		int height;
	public:
		void setDimensions(int a, int b, int c)
		{
			length=a;
			breadth=b;
			height=c;
		}
		int getVolume()
		{
			long int volume;
			volume=length*breadth*height;
			return volume;
		}	
};
int main()
{
	box box1,box2,box3;
	long int volume1,volume2,volume3;
	
	box1.setDimensions(10,5,6);
	box2.setDimensions(10,11,12);
	box3.setDimensions(10,2,3);
	volume1=box1.getVolume();
	volume2=box2.getVolume();
	volume3=box3.getVolume();
	cout<<"Volume of box1 = "<<volume1<<endl;
	cout<<"Volume of box2 = "<<volume2<<endl;
	cout<<"Volume of box3 = "<<volume3<<endl;
}
