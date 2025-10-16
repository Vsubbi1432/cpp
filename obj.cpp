#include <iostream>
using namespace std;
class A {
public:
    int a;
    int *b;
     A (int x,int y){
    	a=x;
    	b=new int;
    	*b=y;
	}
	void display(){
		cout<<"a="<<a<<endl<<"*b="<<*b<<endl;
	}
	void update(int z){
		*b=z;
	}
	
	A (A  &ob){
		a=ob.a;
		b= new int;
		*b=*ob.b;
	}
	void address(){
		cout<<"address = "<<b;
	}
	};
	int main(){
		A obj1(10,20);
	    A obj2 = obj1;
		obj1.display();
		obj2.update(80);
		obj2.display();
		obj1.address();
		obj2.address();
		
		return 0;
	}
