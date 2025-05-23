#include<iostream>
using namespace std;
class Shape{
public:
    virtual int getArea() = 0;
    void setHeight(int h){
        height = h;
    }
    void setWidth(int w){
        width = w;
    }
protected:
    int height, width;
};
class Rectangle: public Shape{
public:
    int getArea(){
        return (height*width);
    }
};
class Triangle: public Shape{
public:
    int getArea(){
        return (height*width)/2;
    }
};

int main(void){
    Rectangle rect;
    Triangle tri;
    double h, w;
    cout<<"Height:";
    cin>>h;
    cout<<"Width:";
    cin>>w;
    rect.setHeight(h);
    rect.setWidth(w);
    tri.setHeight(h);
    tri.setWidth(w);
    cout<<"Area of Rectangle: "<<rect.getArea()<<endl;
    cout<<"Area of Triangle: "<<tri.getArea()<<endl;
}
