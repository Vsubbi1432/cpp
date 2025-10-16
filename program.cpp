#include <iostream>
#include <string>
using namespace std;

class student {
private:
    int sid;
    string name;
    float Ave;

public:
    void getdata();
    void printdata();
};

void student::getdata() {
    cout << "Enter Id: ";
    cin >> sid;
    cout << "Enter Name: ";
    cin >> name;
    cout << "Enter Average: ";
    cin >> Ave;
}

void student::printdata() {
    cout << "ID: " << sid << ", Name: " << name << ", Average: " << Ave << endl;
}

int main() {
    student s[4];
    for (int i = 0; i < 4; i++) {
        cout << "\nEnter details for student " << i + 1 << ":\n";
        s[i].getdata();
    }

    cout << "\nStudent Details:\n";
    for (int i = 0; i < 4; i++) {
        s[i].printdata();
    }

    return 0;
}

