#include <iostream>
using namespace std;
class Rect{
private:
int l,w;
int area,cir;
public:
Rect(){cout<<"ezyak ya mechanic form default constructor"<<endl;};
Rect(int a, int b){cout<<"ezyak ya mechanic form paramatartiut constructor"<<endl;l=a;w=b;}
//Rect(){cout<<"ezyak ya mechanic form default constructor"<<endl;};
~Rect (){cout<<"bye mechanic"<<endl;}
inline void setLength(int a){l=a;}
void setWidth(int a){w=a;}
int getLegth(){return l;}
int getWidth(){return w;}
int calcArea(){area=l*w; return area;}
int calcCir(){return 2*(l+w);}

};
void displayRect(Rect r){
cout<<"rect data"<<endl;
cout<<"len = "<<r.getLegth()<<"\twidth = "<<r.getWidth()<<endl;
cout<<"Area = "<<r.calcArea()<<endl;
cout<<"Cir = "<<r.calcCir()<<endl;
cout<<"----------------------------"<<endl;
}
int main()
{
Rect r1(3,4);
Rect r2;
//r1.setLength(3);//l=3;
//r1.setWidth(4);
cout<<"area = "<<r1.calcArea()<<endl;
displayRect(r1);
//r1.setLength(30);
//r1.dispRect();
return 0;
}
int test()
{


}