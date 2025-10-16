#include<iostream>
using namespace std;
template<typename T1,typename T2>
T1 getmax(T1 a,T2 b)
{
	return (a>b)?a:b;
}
int main()
{
	cout<<"max is :"<<getmax(10,20)<<endl;
	cout<<"max is :"<<getmax(20,34)<<endl;
	cout<<"max is :"<<getmax(12,20)<<endl;
	cout<<"max is :"<<getmax(45,23)<<endl;
	int p=10,q=20;
	cout<<"max is :"<<getmax(p,q)<<endl;
	return 0;
}

