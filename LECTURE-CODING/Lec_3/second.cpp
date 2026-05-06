#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    //float grade1,grade2,grade3;
    long grades[]={9, 8, 7, 9 ,10,7,3,3,3,3,3,9};
    //ofstream file;
    //file.open("d:\\grades.data");
    ifstream file;
    file.open("d:\\grades.data");
    for(int i=0;i<sizeof(grades)/sizeof(grades[0]);i++)
        file>>grades[i];

    for(int i=0;i<sizeof(grades)/sizeof(grades[0]);i++)
        cout<<grades[i]<<endl;
cout<<"----------------"<<endl;
cout<<sizeof(grades)/sizeof(grades[0])<<endl;
    return 0;

}