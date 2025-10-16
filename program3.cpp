#include<iostream>
using namespace  std;
class student{
	private :
		int sid;
		char name[20];
		double cgpa;
		private:
			void getdata{
				cout << "enter the id name and cgpa" << endl;
				cin >> sid >> name >> cgpa;
			}
};
int main()
{
	student s[5];
	int i;
	for(i=0;i<5;i++){
		s[i].getdata():
	}
	for(i=0;i<5;i++){
		s[i].printdata():
	}
}
