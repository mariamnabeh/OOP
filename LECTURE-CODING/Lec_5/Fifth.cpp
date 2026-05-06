#include <iostream>
#include <cmath>
using namespace std;

int main() {
    string msg="Error: there is no -ve length.";
    try {
        double length;
        cout << "Enter a length: ";
        cin >> length;

        if (length < 0)
            throw msg;

cout << "rest of try block" << endl;
    }
    catch ( string msg) {
        cout << msg << endl;
    }

    cout << "Program continues safely..." << endl;
    return 0;
}