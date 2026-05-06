#include <iostream>
#include <string>
using namespace std;

int main() {
  try {
        string s = "aa";

        int x = stoi(s);
        cout<<x+1<<endl;
    }
    catch (exception &e) {
        cout << "Invalid input: " << e.what() << endl;
    }
cout<<"bye"<<endl;
    return 0;
}