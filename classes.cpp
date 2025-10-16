#include<iostream>
using namespace std ;

class A {
	private:
	int a, b ;
	double cgpa;
	public:
		A(){
			a =10 ,b =20 , cgpa =  0.00;		}
		A(int x , int y){
       a = x , b= y ,cgpa = 1.00;
		}
		A(int x , int y , double d){
			a =x , b= y , cgpa = d;
		}
		A(int p){
			a=0;b=p;cgpa =4.00;
		}
		A(double q){
			a= 30 ,b = 40 , cgpa = 	q;
		}
		A(double d1 , int x1 , int y1){
			a = 60 , b = 70 ,cgpa = 9.00;
		}
		void display (){
			cout<<"a ="<<a<<"b ="<<b<<"cgpa ="<<cgpa<<endl;
		}
};
int main(){
	A one;
	A two(20);
	A three(45.92);
	A four(20,30,8.42);
	A five (10,30,9.89);
	one.display();
	two.display();
	three.display();
	four.display();
	five.display();
	return 0;
}
