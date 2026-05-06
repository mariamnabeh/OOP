#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    //float grade1,grade2,grade3;
    long grades[10]={9, 8, 7};
int i;
    for(i=0;i<sizeof(grades)/sizeof(grades[0]);)
        cout<<++grades[i++]<<endl;
     i=0;   
        grades[i++];
        grades[i]++;
cout<<"----------------"<<endl;
cout<<sizeof(grades)/sizeof(grades[0])<<endl;
    return 0;

}