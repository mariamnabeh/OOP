#include <iostream>
#include <fstream>
#include <vector>
using namespace std;


int main()
{
int x;
x=15;
int *ptr;

ptr=&x;

cout<<&x<<" : "<<x<<endl;
cout<<ptr<<" : "<<*ptr<<endl;
for(int i=0;i<10;i++)
    cout<<(ptr+i)<<" : "<<*(ptr+i)<<endl;
int nums[10]={10,20,30,40,50,60,70,80,90,100};
ptr=&nums[0];
for(int i=0;i<10;i++)
    cout<<(ptr+i)<<" : "<<*(ptr+i)<<endl;
    return 0;
}