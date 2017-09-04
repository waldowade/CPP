#include <iostream>
using namespace std;
///by teacher
class Shape{
public:
    int x, y;

    Shape(){
        x = 1;
        y = 1;
    }

    Shape(int x, int y){
        this->x = x;
        this->y = y;
    }

    virtual void draw(){
        cout << "(x,y)= (" << x << "," << y << ")" << endl;
    }
};

class Circle: public Shape{
public:
    int radius;

    Circle(){
        radius = 1;
    }

    Circle(int x, int y, int radius):Shape(x, y){
        // 初始化 x, y
        //Shape(x, y);
        // 初始化 radius
        this->radius = radius;
    }

    void draw(){
        // 印出圓心
        Shape::draw();
        // 印出半徑
        cout << "radius: " << radius << endl;
    }


};

int main(void){
    Shape *sp;
    Circle ci(2,2,2);

    sp = &ci;
    sp->draw();


}

