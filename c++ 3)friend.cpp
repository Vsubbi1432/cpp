#include<iostream>
using namespace std;
class car
{
	int srno;
	public:
		friend void printsrno(car obj);
		
			car(int sr);

};
car::car(int sr){
	srno = sr;
}
void printsrno(car car1)	
{
	cout<<"the serial number is:"<<car1.srno<<endl;
}
int main()
{
	car car1(9999);
	printsrno(car1);
	return 0;
}
