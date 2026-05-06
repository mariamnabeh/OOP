#include <iostream>
#include <fstream>
#include <vector>
using namespace std;
class Rectangle{
private:
    int length;
    int width;

public:
    Rectangle(int l=0, int w=0)
    {
        length=l;
        width=w;

    }
    Rectangle(const Rectangle &r)
    {

        length=r.length;
        width=r.width;


    }

    ~Rectangle(){

    }
        Rectangle operator+ (Rectangle r)
    {
        Rectangle res;
        res.length=this->length+r.length;
        res.width=this->width+r.width;
        return res;
    }
    void displayRectangle()
    {
        cout<<"--------- Rectangle "<<this<<"-------------"<<endl;
        cout<<"length ="<<length<<endl;
        cout<<"width ="<<width<<endl;
        cout<<"Area = "<<length*width<<endl;

    }
};

int main()
{

    Rectangle r1(3,4);
    Rectangle r2(5,6);
    Rectangle r3;
    r3=r1+r2;
    cout<<"*** r1 ******"<<endl;
    r3.displayRectangle();

    return 0;
}