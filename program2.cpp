#include<iostream>
using namespace std;

class student{
	private: int id;
	         char name[30];
	         float ave;
	public: void getdata();
	        void printdata();
};
void student::getdata(){
	cout<<"enter id:"<<endl;
	cin>>id;
	cout<<"enter name:"<<endl;
	cin>>name;
	cout<<"enter average:"<<endl;
	cin>>ave;
	
}
void student::printdata()
{
	cout<<id<<" "<<name<<" "<<ave<<" "<<endl;
}
int main (){
	student s[4];
	int i;
	for(i=0;i<4;i++){
		s[i].getdata();
	}
	for(i=0;i<4;i++){
		s[i].printdata();
		
			}
			return 0;
}
