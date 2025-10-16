#include<iostream>
using namespace std;
class Base
{
	public :
		int a,b;
		Base()
		{
			a=100;
			b=200;
		}
		virtual double area()=0;
};
class Derived: public Base
{
	public :
		double area()
		{
			return a*b;
		}
};
int main()
{
	Derived obj1;
	cout<<obj1.area();
//	Base obj2;
//	obj2.area();
	 return 0;
}
