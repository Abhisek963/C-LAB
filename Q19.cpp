#include <iostream>
using namespace std;

class Sample {
private:
    int x;
    int y;

public:
    Sample() {
        x = 0;
        y = 0;
        cout << "Default Constructor called. x = " << x << ", y = " << y << endl;
    }
    Sample(int a, int b) {
        x = a;
        y = b;
        cout << "Parameterized Constructor called. x = " << x << ", y = " << y << endl;
    }
    Sample(int a) {
        x = a;
        y = 100;
        cout << "Constructor with Default Argument called. x = " << x << ", y = " << y << endl;
    }
    ~Sample() {
        cout << "Destructor called. x = " << x << ", y = " << y << endl;
    }
};
int main() {
    cout << "Creating obj1 with Default Constructor..." << endl;
    Sample obj1;
    cout << "\nCreating obj2 with Parameterized Constructor..." << endl;
    Sample obj2(10, 20);
    cout << "\nCreating obj3 with Constructor having Default Argument..." << endl;
    Sample obj3(30);
    cout << "\nExiting the program, destructors will be called automatically..." << endl;

}
