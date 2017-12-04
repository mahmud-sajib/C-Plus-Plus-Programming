/*
1. Destructor can be used to destroy an object or deallocating the memory location of a pointer/variable
2. Destructor does not take any argument. Syntax is: ~ClassName(){}
3. We use 'delete' keyword for instructing a destructor to work
*/

#include <iostream>
using namespace std;

class Student{

public:
    // creating a constructor
    Student(){
        cout<< "Constructor called" <<endl;
    }
    // creating a destructor
    ~Student(){
        cout<< "Destructor called" <<endl;
    }
};

int main(){
    // creating a pointer object
    Student *obj = new Student();
    // calling destructor to work
    delete obj;
    return 0;
}
