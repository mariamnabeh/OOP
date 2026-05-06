#include <iostream>
#include <vector>
using namespace std;

int main()
{
    //float grade1,grade2,grade3;
    long grades[]={9, 8, 7, 9 ,10,7,3,3,3,3,3,9};



    for(int i=0;i<sizeof(grades)/sizeof(grades[0]);i++)
        cout<<grades[i]<<endl;
cout<<"----------------"<<endl;
cout<<sizeof(grades)/sizeof(grades[0])<<endl;
    return 0;

}