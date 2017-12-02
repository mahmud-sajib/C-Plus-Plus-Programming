/*

  1. We can define a function/property outside class. In this case we only declare the function inside the class.

  2. To define a function outside class we use this syntax: DataType ClassName :: functionName(){}

  3. We can't define a regular variable/property outside the class in the same way we do for function

*/

#include <iostream>
using namespace std;
class Student{

public:
    string name;
    //declaring the function inside class
    void display();

};

//defining the function outside class
void Student :: display(){
    cout << "Hello " << name;
}

int main(){
    Student obj;
    obj.name = "Mahone";
    obj.display();
    return 0;
}
