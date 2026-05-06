#include <iostream>
#include <fstream>
#include <vector>
using namespace std;
class Rectangle{
private:
    int length;
    int width;
    string *family=new string;
public:
    Rectangle(int l=0, int w=0)
    {
        length=l;
        width=w;
        *family="shape";
    }
    Rectangle(const Rectangle &r)
    {
        length=r.length;
        width=r.width;
        family=new string;
        *family=*r.family;
    }
    ~Rectangle(){
    delete family;
    }
    void displayRectangle()
    {
        cout<<"--------- Rectangle "<<this<<"-------------"<<endl;
        cout<<"length ="<<length<<endl;
        cout<<"width ="<<width<<endl;
        cout<<"Area = "<<length*width<<endl;
        cout<<"Family = "<<family<<" :" <<*family<<endl;
        cout<<"----------------------"<<endl;
    }
};

int main()
{

    Rectangle r1(3,4);
    cout<<"*** r1 ******"<<endl;
    r1.displayRectangle();
    if(1){


    Rectangle r2=r1;
    cout<<"*** r2 ******"<<endl;
    r2.displayRectangle();
    }

    cout<<"*** r1 ******"<<endl;
    r1.displayRectangle();

    //cout<<"*** r1 ******"<<endl;
    //r1.displayRectangle();
    return 0;
}