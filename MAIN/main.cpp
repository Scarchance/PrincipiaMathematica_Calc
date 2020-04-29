#include <iostream>

using namespace std;

int y;
int q;
int t;

int main () {
    cout << "PRINCIPIA 1.0 LAUNCH SUCCESSFUL" << endl;
    cout<< "Enter 1st number:";
    cin>>y ;
    cout<< "Enter 2st number:";
    cin>>q ;
    cout << "Select one of the following operations: add(+), Substract(-), Multiply(*), Divide (/) : " ;
    char input;
    cin >>input;
    if (input=='+') {
    cout << y+q;
    }
    else if (input=='-'){
    cout<< y-q;
    }
    else if (input=='/') {
        cout << y/q;
    }
    else if (input=='*'){
        cout<< y*q;
    }

    else {
        cout << "\n" << "READY FOR NEXT OPERATION";
        t = 0;
        while (t == 0) {
            cout << "\n" << "Enter 1st number:";
            cin >> y;
            cout << "Enter 2st number:";
            cin >> q;
            cout << "Select one of the following operations: add(+), Substract(-), Multiply(*), Divide (/) : ";
            char input;
            cin >> input;
            if (input == '+') {
                cout << y + q;
            }
            if (input == '-') {
                cout << y - q;
                return 0;
            }
            if (input == '/') {
                cout << y / q;
            }
            if (input == '*') {
                cout << y * q;
            }

        }
    }
    return 0;
}
