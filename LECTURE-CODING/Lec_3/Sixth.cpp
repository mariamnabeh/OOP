#include <iostream>
#include <fstream>
using namespace std;
double calcAvg(int x[],double s);
int main()
{
int grades[]={0, 1,2, 2,0,0,7,7,9,4};
cout<<calcAvg(grades,(sizeof(grades)/sizeof(grades[0])));
    return 0;

}
double calcAvg(int x[],double s){
    float sum,avg;
    sum=0;
    for(int i=0;i<s;i++)
        sum=sum+x[i];
    avg=sum/s;
    return avg;
}