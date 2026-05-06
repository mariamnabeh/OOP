#include <iostream>
#include <fstream>
#include <vector>
using namespace std;
class Rectangle{
    private:
    int length;
    int width;
    public:
        void setLength(int length){
        this->length=length;
        }
        int getLength(){return length;}
    /*Rectangle()
    {
        length=0;
        width=0;

    }*/
    Rectangle(int length=0, int width=0)
    {
        this->length=length;
        this->width=width;

    }
        void displayRectangle()
    {
        cout<<"--------- Rectangle : "<<this<<" -------------"<<endl;
        cout<<"length ="<<length<<endl;
        cout<<"width ="<<width<<endl;
        cout<<"Area = "<<length*width<<endl;
    }
};

int main()
{
    Rectangle r1(5,6),r2;


    r1.displayRectangle();
    r2.displayRectangle();

    return 0;
}