#include <iostream>
using namespace std;

void cls();
int add();
int sub();

int main() {
    int user_input, result;
    
    do {
        cls();
        cout<<"C++ Calculator\n1. Add\n2. Subtract\n3. Exit\nEnter your choice: ";
        cin>>user_input;

        switch(user_input) {
            case 1:
                result = add();
                break;
            case 2:
                result = sub();
                break;
            case 3:
                cls();
                cout<<"Program exited.";
                cin.get();
                exit(0);
                break;
            default:
                cls();
                cout<<"Invalid input.\n";
                cin.get();
        }
    }while(true);
}

void cls() {
    cout<<"\033[2J\033[1;1H"; // clear screen
}

int add() {
    int x, y;
    cls();
    cout<<"ADD\n";
    cout<<"Enter first number to add: ";
    cin>>x;
    cin.ignore();
    cls();
    cout<<"ADD\n";
    cout<<"Enter second number to add: ";
    cin>>y;
    cin.ignore();
    cls();
    cout<<"Result: "<<x + y;
    cin.get();
    return x + y;
}

int sub() {
    int x, y;
    cls();
    cout<<"SUB\n";
    cout<<"Enter first number: ";
    cin>>x;
    cin.ignore();
    cls();
    cout<<"SUB\n";
    cout<<"Enter second number: ";
    cin>>y;
    cin.ignore();
    cls();
    cout<<"Result: "<<x - y;
    cin.get();
    return x - y;
}
