#include <iostream>
using namespace std;
class Rect{
private:
int l,w;
public:
void setLength(int a){l=a;}
void setWidth(int a){w=a;}
int getLegth(){return l;}
int getWidth(){return w;}
int calcArea(){return l*w;}
};

int main()
{
Rect r1,r2;
r1.setLength(3);
r1.setWidth(4);

cout<<"rect 1 data"<<endl;
cout<<"len = "<<r1.getLegth()<<"\twidth = "<<r1.getWidth()<<endl;
cout<<"Area = "<<r1.calcArea()<<endl;
return 0;
}
int test()
{
Rect r1;

}