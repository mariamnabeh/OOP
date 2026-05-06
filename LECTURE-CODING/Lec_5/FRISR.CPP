#include <iostream>
#include <vector>
using namespace std;

int main() {
try
{
        vector<int> v = {1, 2, 3};

        cout << v.at(5);
}
catch(exception e)
{
cout<<e.what()<<endl;

}
cout<<"bye";

    return 0;
}