#include <iostream>

using namespace std;

int y;
int q;
int t;

int main () {

    cout << "PRINCIPIA 1.0 LAUNCH SUCCESSFUL" << endl;

    cout << "\n" << "READY FOR NEXT OPERATION";
    t = 0;
    while (t == 0) {

        cout << "\n" << "Enter 1st number:";
        cin >> y;
        cout << "Enter 2nd number:";
        cin >> q;

        cout << "Select one of the following operations: add(+), Substract(-), Multiply(*), Divide (/) or q to Quit : ";
        char input;
        cin >> input;

        if (input == '+') {
            cout << y + q<< "\n";
        } else if (input == '-') {
            cout << y / q << "\n";
        } else if (input == '*') {
            cout << y * q << "\n";
        } else if (input == 'q') {
            cout << "Exiting! Thanks for using our calculator!";
            t=1;
        } else {
            cout << "Wrong/ unsupported operation, try again";
        }

    }
    return 0;
}
