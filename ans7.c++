#include<bits/stdc++.h>
using namespace std;
class Base {
public:
  void display() {
     cout<<"display function of Base class"<<endl;
    }
};

class Derived: public Base {
public:
  void show(){
     cout<<"show function of Derived class"<<endl;
   }
};

int main( ) 
{ 
  Base a;
  Derived b;

  // upcasting
  Base *base= &b; 

  // downcasting
  Derived *derived =  (Derived *) &a;

  base -> display();
  derived -> show();
    
  return 0; 
}

