#include<bits/stdc++.h>
using namespace std;
class Base
{
   public:
    void Show(int a)     //overloading
    {
        cout<<a<<endl;
    }
    void Show(int a, int b)
    {
       cout<<a<<" "<<b<<endl;
    }
    virtual void Display()    //overriding
    {
        cout<<"Display function of Base class"<<endl;
    }
};

class Derived : public Base
{
    public:
    void Display()    //override display method
    {
      cout<<"Display function of Derived class"<<endl;
    }
};

int main()
{
   Derived obj1;
   Base obj;
   Base &obj2= obj1;
   obj.Display();
   obj1.Display();
   obj2.Show(4);
  obj2.Show(4,8);

}
