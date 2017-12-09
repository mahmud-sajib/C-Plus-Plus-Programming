/*
1.The Parent class is called Base class & Child class is called Sub class
2.We can derive sub class with this syntax: class ParentClass: public ChildClass
*/

#include<iostream>
using namespace std;

class Person{
public:
    string name;
    void setName(string n){
        name = n;
    }
};

class Student : public Person{
public:
    int age;
    void setAge(int a){
        age = a;
    }
    void display(){
        cout << name <<endl <<age;
    }
};
int main()
{
    Student obj;
    obj.setName("Akib");
    obj.setAge(20);
    obj.display();
    return 0;
}
