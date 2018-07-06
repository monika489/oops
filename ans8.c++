#include<bits/stdc++.h>
using namespace std;

class modifierEx
{
private:
int a;
public:
int b;
protected:
int c;
public:

void Display()
{
a=10;
b=20;
c=30;
//can access all the members within a class
cout<<"Value of a: "<<a<<endl;
cout<<"Value of b: "<<b<<endl;
cout<<"Value of c: "<<c<<endl;
}
};

class Derived:public modifierEx
{
public:
void Display()
{
b=5;
c=6;
//a is private so can't access here
//cout<<"Value of a: "<<a<<endl;
cout<<"Value of b: "<<b<<endl;
cout<<"Value of c: "<<c<<endl;
}
};

int main()
{

modifierEx m;
m.Display();

Derived d;
d.Display();   
// a can't be access outside the class
//cout<<"Value of a: "<<m.a<<endl;
// b is public so can access here
cout<<"Value of b: "<<m.b<<endl;
// c is protected so can't be access outside the class

//cout<<"Value of c: "<<m.c<<endl;

return 0;
}
