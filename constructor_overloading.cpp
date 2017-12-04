/*
1. We can create a overloading constructor by passing parameter to it's argument.
2. When we create a overloading constructor we need to pass the parameter when we instantiate the object.
*/

#include <iostream>
using namespace std;

class Student{
private:
    string name;
    int age;

public:
    // creating a default constructor

    Student(){
        name = "Mahmud";
        cout<< "This is a default constructor " <<endl;
    }

    // creating an overloading constructor
    Student(string n){
        name = n;
        cout<< "This is a overloading constructor " <<endl;
    }

    void display(){
        cout << name << endl;
    }
};

int main(){

    // instantiating object
    Student obj;
    obj.display();

    // passing parameter when instantiating an object
    Student obj2("Lubaba");
    obj2.display();
    return 0;
}

