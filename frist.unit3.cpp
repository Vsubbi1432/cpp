#include<iostream>
using namespace std;
class frist{
	int a;
	public:
		first(){
			a=0;
		}
		first(int x){
			a=x;
		}
		void print(){
			cout<<"a= "<<a<<end1;
		}
	void operator++()
	{
		++a;
	}
};
int maain()
{
	frist obj1(15),obj2(27);
	obj1.print();
	++obj;
	obj1.print();
	obj2++;
	obj2.print();
	return 0;
}

