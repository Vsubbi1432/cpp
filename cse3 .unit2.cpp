#include<iostream>
using namespace std;
class cse3{
	int i;
	public:void seti(int n){ i=n;}
	      int geti(){return i;}
};
cse3 f()
{
	cse3 x;
	x.seti(10);
	return x;
}
int main()
{
	cse3 obj;
	obj=f();
	cout<<"Now we are in main.....printing i="<<obj.geti()<<end1;
	return 0;
}
