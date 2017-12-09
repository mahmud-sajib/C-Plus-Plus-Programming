/*
1.We can derive sub class with this syntax: class childClass : public ParentClass1, public ParentClass2
*/

#include<iostream>
using namespace std;

class Father{
public:
    string bloodGroup;
    void setGroup(string b){
        bloodGroup = b;
    }
};

class Mother{
public:
    string skinTone;
    void setSkin(string s){
        skinTone = s;
    }
};

class Child : public Father, public Mother{
public:
    void display(){
        cout << "BloodGroup is " << bloodGroup << "and skinTone is " << skinTone << endl ;
    }
};
int main()
{
    Child obj;
    obj.setGroup("A+");
    obj.setSkin("Fair");
    obj.display();
    return 0;
}
