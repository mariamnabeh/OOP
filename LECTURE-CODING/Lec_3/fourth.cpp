#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    //float grade1,grade2,grade3;
    long grades[5]={9, 8, 7};
    long gardes2[5];
    //grades2=grades;
int i;
    for(i=0;i<sizeof(grades)/sizeof(grades[0]);i++)
        gardes2[i]=grades[i];

         for(i=0;i<sizeof(gardes2)/sizeof(gardes2[0]);i++)
        cout<<gardes2[i]<<endl;
cout<<"----------------"<<endl;
cout<<sizeof(grades)/sizeof(grades[0])<<endl;
cout<<"----------------"<<endl;
cout<<(gardes2==grades);
grades[3]=100;
bool equals=true;
for(int i=0; i<sizeof(grades)/sizeof(grades[0]);i++)
{
    if((gardes2[i]!=grades[i])){equals=false;break;}
}
cout<<(equals?"arrays are equal":"arrays are not equal")<<endl;
    return 0;

}