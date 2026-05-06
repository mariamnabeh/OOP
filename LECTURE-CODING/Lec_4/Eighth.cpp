#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

class Rectangle{
private:
    int length;
    int width;
    string *family;
public:
    Rectangle(int l)
    {
        length=l;
        width=l;
        family=new string;
        *family="shape";
    }
    Rectangle(int l, int w)
    {
        length=l;
        width=w;
        family=new string;
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
    Rectangle r2=10;

        cout<<"**** r1 *****"<<endl;
    r1.displayRectangle();

    cout<<"**** r2 *****"<<endl;
    r2.displayRectangle();



    return 0;
}