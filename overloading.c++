#include<iostream>
using namespace std;
class A{int a,b;
public : A(){
	a=10;
	b=20;
	cgpa=0.00;
}
A(int x,int y){
	a=x;
	b=y;
	cgpa=d;
}
A(int p){
	a=0;
	b=p;
	cgpa=4.00;
}
A(double q){
	a=30;
	b=40;
	cgps=q;
}
A(double d1,int x1,int y1){
	a=60;
	b=70;
	cgpa=9.00;
}
};
int main()
{
	A one;
	A two(20);
	A three(45,92);
	A four(20,30,8.42);
	A five(9.10,6.76,5.16);
	one.display();
	two.display();
	three.display();
	
}
return 0;

}
