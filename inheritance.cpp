#include<iostream>
using namespace std;
class base
{
    private:
    int a;
    public:
    int b;
    protected:
    int c;
    public:
    void intt()
    {
        a=10;
        int b;
    }
};
class Derived: public base{
    private:
    int d;
    public:
    void init_D()
    {
        intt();
        b=20;
        c=30;
        d=40;
    }
    void display()
    {
        cout<<b<<c;
    }


};
int main()
{
    Derived obj;
    obj.init_D();
    obj.display();
}