#include <iostream>
using namespace std;
class base{
    public:int a=10,b=20;
    public: void print(){
        cout<<"base class print"<<endl;
    }
    void display(){
        cout<<"base class display"<<endl;
    }
};
class derived:public base{
    public:
    void print(){
        cout<<"derived class print"<<endl;
    }
    void display(){
        cout<<"derived class display"<<endl;
    }
    void result(){
        cout<<"a="<<a<<" b="<<b<<endl;
    }
};
int main(){
    base *ptr;
    
    derived obj;
    ptr=&obj;
    ptr->print();
    ptr->display();
    ptr->results(); 
    delete ptr;
    return 0;
}
