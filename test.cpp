#include<iostream>
using namespace std;

class Base
{
    int a;
    protected:
    int b;
    public:
    int c;  

    void get(int x)
    {
        a=x;
    }
    void show()
    {
        cout<<a;
    }
};

class der:public Base
{
    int aa;
    protected:
    int bb;
    public:
    int cc;
    
    void take(int x,int y,int z)
    {
        aa=x;
        bb=y;
        b=z;
    }    
    void disp()
    {
        cout<<aa<<bb<<cc;
    }
};

int main()
{
    der d;
    d.get(10);
    d.take(20,30,40);
    d.c=50;
 d.cc=60;
    d.show();
    d.disp();
    cout<<d.c<<d.cc;
}

