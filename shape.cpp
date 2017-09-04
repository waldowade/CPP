#include<iostream>
using namespace std;
class shape
{
public:
  double x;
  double y;
  void computArea()
  {cout<<x*y<<endl; }
  
};
class circle:public shape
{
public:
double radius;
void computArea()
{cout<<radius*radius*3.14<<endl;
}

};
int main()
{
 shape sh;
 sh.x=9;
 sh.y=10;
circle ci;
ci.x=50;
ci.y=60;
ci.radius = 2;
cout<<ci.x<<endl;
ci.computArea();
}
