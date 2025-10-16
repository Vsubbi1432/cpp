// First example of a class accessing simple data to enter and display
#include<iostream>
using namespace std;

class person {
private:
    char name[20];
    int id;

public:
    void getdata() {
        cout << "Enter name: " << endl;
        cin >> name;
        cout << "Enter ID: " << endl;
        cin >> id;

        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
    }
};

int main() {
    person one;
    one.getdata();
    return 0;
}

