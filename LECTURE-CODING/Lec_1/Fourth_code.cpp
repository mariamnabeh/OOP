#include <iostream>
using namespace std;
class Rect{
private:
int l,w;
int area,cir;
public:
inline void setLength(int a){l=a;}
void setWidth(int a){w=a;}
int getLegth(){return l;}
int getWidth(){return w;}
int calcArea(){area=l*w; return area;}
int calcCir(){return 2*(l+w);}
void dispRect();
};
void Rect::dispRect()
{
cout<<"rect data"<<endl;
cout<<"len = "<<l<<"\twidth = "<<w<<endl;
cout<<"Area = "<<area<<endl;
cout<<"Cir = "<<calcCir()<<endl;
cout<<"----------------------------"<<endl;
}
int main()
{
Rect r1;
r1.setLength(3);//l=3;
r1.setWidth(4);
cout<<"area = "<<r1.calcArea()<<endl;
r1.dispRect();
r1.setLength(30);
r1.dispRect();
return 0;
}
int test()
{
Rect r1;

}