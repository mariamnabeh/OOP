#include <iostream>
#include <vector>
using namespace std;

int main() {
    	vector<int> arr(10);
            try {
        for(long i=100000;i<1000000000;i++)
                    arr.at(i) = i;
        cout << "Memory allocated successfully" << endl;

   }
    catch (exception &e) {
        cout << "Allocation failed: " << e.what() << endl;
    }
cout<<"bye";
    return 0;
}