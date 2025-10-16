#include<iostream>
using namespace std;
class base
{
	public :
		int x;
		base()
		{
			x=100;
		}
		void display()
		{
			cout<<"x="<<x<<endl;
		}
};
class derived:public base
{
	public:
	int y;
	Derived()
	{
		y=200;
	}
	void display()
	{
		cout<<"x="<<x<<endl;
		cout<<"y="<<y<<endl;
	}
};
int main()

{
	derived ob1;
	ob1.display();
	return 0;
}
