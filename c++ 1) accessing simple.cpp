//first example of a class accessing simple data to enter and display
#include<iostream>
using namespace std;
class person
{
	private:char name[20];
	        int id;
	public:void  getdata()
	{
		cout << "Enter name:" <<end1;
		cin >> name;
		cout<< "Enter id:" << end1;
		cin>>id;
		cout<< "name: " << name << end1;
		cout<< "id":<< id  << end1;
	}
};
int main()
{
	person one;
	one.getdata();
	return 0;
}
