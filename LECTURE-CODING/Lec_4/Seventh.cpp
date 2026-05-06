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
    Rectangle(int l=0, int w=0)
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
    Rectangle operator+ (Rectangle r)
    {
        Rectangle res;
        res.length=this->length+r.length;
        res.width=this->width+r.width;
        return res;
    }
    Rectangle operator=(Rectangle r)
    {
        this->length=r.length;
        this->width=r.width;
        *family=*r.family;
        return *this;
    }
    Rectangle& operator++() { //pre
        length++;width++;
        return *this;
    }

    Rectangle operator++(int) { //post
        Rectangle temp = *this;
        length++;width++;
        return temp;
    }
    operator int() {return length+width;}
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
    Rectangle r2(1,2);
    Rectangle r3;
    r3=r1+r2;
        cout<<"**** r3 *****"<<endl;
    r3.displayRectangle();
    r2=r1;
    cout<<"**** r1 *****"<<endl;
    r1.displayRectangle();
    cout<<"**** r2 *****"<<endl;
    r2.displayRectangle();
    cout<<int(r1)<<endl;



    return 0;
}