#include <iostream>
#include <fstream>
#include <vector>
using namespace std;
class Square{
    private:
    int length;
    string *family;
public:
    Square(int l)
    {
        length=l;
        family=new string;
        *family="Square";
    }
    Square(const Square &r)
    {
        length=r.length;
        family=new string;
        *family=*r.family;
    }
    ~Square(){
    delete family;
    }
    void displaySquare()
    {
        cout<<"--------- Square "<<this<<"-------------"<<endl;
        cout<<"length ="<<length<<endl;
        cout<<"Area = "<<length*length<<endl;
        cout<<"Family = "<<family<<" :" <<*family<<endl;
        cout<<"----------------------"<<endl;
    }
    int getLength(){return length;}

};
class Rectangle{
private:
    int length;
    int width;
    string *family;
public:
     Rectangle(Square s)
    {
        length=s.getLength();
        width=s.getLength();
        family=new string;
        *family="shape";
    }
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
Square s1(4);

    Rectangle r4=s1;
    r4.displayRectangle();

    return 0;
}