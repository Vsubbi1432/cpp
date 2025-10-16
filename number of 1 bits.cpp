#include<iostream>
using namespace std;
class void print (){cout<<"Base class print"<<endl;
}
void display (){cout<<"Base class display "<<endl;
}
class derived : public base{
	public : void print(){cout<<"Derived class print"<<endl;
}
           	void display(){ cout<<"Derived class display"<<endl;
	
}
};
int main()
{
	base *ptr;
	derived obj;
	ptr=&obj;
	ptr->printa();
	ptr->geta();
    ptr->getb();
    ptr->printb();
    return 0;
}


