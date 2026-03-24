#include <iostream>

using namespace std;
class Owner;
class Car;
class Engine{
    private:
    int cc;
    int hp;
    public:
    void setEngin(int c,int h);
    void displayEngine();
                  };


class Car {
private:
    string model;
    string makeDate;
    Engine e;
    int km;
public:
    void setEngine(int c,int h)
    {
        e.setEngin(c,h);

    }
    void setCar(string m,string d,int k){
    model=m;
    makeDate=d;
    km=k;
    }
    void showCar(){
    cout<<"******"<<endl;
    cout<<"model : "<<model<<endl;;
    cout<<"makeDate : "<<makeDate<<endl;
    cout<<"km :"<<km<<endl;
    e.displayEngine();

    }
};
class Owner{
private:
    string license;
    string name;
public:
    void setOwner(string l, string n)
    {
        license=l;
        name=n;
    }
        void showOwner(){
    cout<<"******"<<endl;
    cout<<"license : "<<license<<endl;;
    cout<<"name : "<<name<<endl;
    }
    void driveCar(Car c)
    {
        cout<<"Owner in driving his car "<<license<<endl;;
        c.showCar();
    }

};

    void Engine::setEngin(int c,int h)
    {
        cc=c;hp=h;
    }
    void Engine::displayEngine()
    {
    cout<<"******"<<endl;
    cout<<"CC : "<<cc<<endl;;
    cout<<"HP : "<<hp<<endl;
    }



int main()
{
    Owner basouny;
    Car nissan;
    basouny.setOwner("123456","Basouny Basouny");
    nissan.setCar("Sunny","2023",12000);
    nissan.setEngine(1400,200);
    basouny.driveCar(nissan);
    nissan.showCar();


    return 0;
}