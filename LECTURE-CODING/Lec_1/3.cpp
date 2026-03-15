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
int calcCir(){return 2*(l+w);}
void dispRect(){
cout<<"rect data"<<endl;
cout<<"len = "<<l<<"\twidth = "<<w<<endl;
cout<<"Area = "<<calcArea()<<endl;
cout<<"Cir = "<<calcCir()<<endl;
cout<<"----------------------------"<<endl;
}
};

int main()
{
Rect r1;
r1.setLength(3);
r1.setWidth(4);
r1.dispRect();

return 0;
}
int test()
{
Rect r1;

}