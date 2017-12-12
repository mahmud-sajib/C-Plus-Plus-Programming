/*
1. virtual function is used in base class which initiates late static biding of a method call and helps to determine which function to declare in which class.
*/

#include<iostream>
using namespace std;

class Shape{
protected:
    int height, width;
public:
    void setVal(int h, int w){
        height = h;
        width = w;
    }
    // virtual function
     virtual int area() = 0;
};

class Rectangle : public Shape{
public:
    int area(){
        return height*width;
    }
};

class Triangle : public Shape{
public:
    int area(){
        return (height*width/2);
    }
};

int main(){

    // obj of Rectangle class
    Rectangle rec;
    // obj of Triangle class
    Triangle trg;

    // creating a pointer object of Base class
    Shape *sp1;
    // creating another pointer object of Base class
    Shape *sp2;

    // assigning pointer object to Rectangle object's reference
    sp1 = &rec;
    // assigning pointer object to Triangle object's reference
    sp2 = &trg;

    // setting value of method area of Rectangle class
    sp1->setVal(5,3);
    // setting value of method area of Triangle class
    sp2->setVal(10,5);

    cout << sp1->area() << endl;
    cout << sp2->area() << endl;

    return 0;
}
