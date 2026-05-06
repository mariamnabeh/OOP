#include <iostream>
using namespace std;

int main() {
    try {

        int* arr = new int[1000000000000];

        cout << "Memory allocated successfully" << endl;

        delete[] arr;
    }
    catch (exception &e) {
       cout << "Allocation failed: " << e.what() << endl;
    }
	cout<<"bye"<<endl;

    return 0;
}