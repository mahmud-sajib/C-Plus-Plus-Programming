/*
1. We can pass predefined value to constructor but we won't be able to use default constructor at that time.
*/

#include <iostream>
using namespace std;

class Student{
private:
    string name;
    int age;

public:
    // creating an overloading constructor with predefined values
    Student(string n="Mohsin", int a=10){
        name = n;
        age =  a;
        cout<< "This is a overloading constructor " <<endl;
    }

    void display(){
        cout << name << endl << age << endl;
    }
};

int main(){
    // passing parameter when instantiating an object
    Student obj;
    obj.display();
    return 0;
}
