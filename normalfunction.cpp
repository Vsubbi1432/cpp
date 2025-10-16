#include<iostream>
using namespace std;
class base
{
	public:
		int a;
	base()
	{
		 a=100;
	}
	virtual void printing()
	{
		cout<<" Value of a : "<<a<<endl;
	}
	
	virtual void display()=0;
};

class derived:public base
{
	public:
	void display()
	{
		cout<<"Hii ! This is a derived class."<<endl;
	}
};

int main()
{
	  derived ob1;
	  base *p;
	  p=&ob1;
	  p->display();
	  p->printing();
	  return 0;
}
