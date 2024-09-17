#include<iostream>
using namespace std;
class Base
{
public:
    int a;
    int b;
    virtual void show()
    {
       cout<<"Enter a and b number:"<<endl;
       cin>>a;
       cin>>b;
       cout<<"A:"<<a<<endl;
       cout<<"B:"<<b<<endl;
    }
};
class Derived : public Base
{
public:
    void show()
    {
        cout<<"My varendra university"<<endl;
        cout<<"Derived Class"<<endl;


    }
};

int main()
{
 Base b;
 Derived d;
 b.show();
 d.show();

return 0;
}
