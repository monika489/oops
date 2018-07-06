#include<bits/stdc++.h>
using namespace std;
class Shape
{
   public:
   virtual double area()=0;
   virtual double perimeter()=0;
};
class Square : public Shape
{
   double side;
    public:
    Square () {
        this->side= 5;
    }

    double area() {
        return side*side;
    }

    double perimeter() {
        return 4*side;
    }
};
class Circle : public Shape
{
  double pi= 3.141;
    double radius;
    public:
    Circle()
    {
        this->radius=4.5;
    }
    double perimeter() {
        return 2*pi*radius;
    }
     double area() {
        return pi*radius*radius;
    }

};
int main()
{
    Circle cr;
    cout<<cr.area()<<endl;
    cout<<cr.perimeter()<<endl;
    Square sq;
    cout<<sq.area()<<endl;
    cout<<sq.perimeter()<<endl; 
}
