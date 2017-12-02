/*

Creating object in different ways.

1. We can use pointer to instantiate an object. The syntax is: ClassName *object = new ClassName();

2. We use dot(.) operator while accessing member of a typical object, meanwhile  we use arrow(->) operator while accessing member of a pointer object

*/

#include <iostream>
using namespace std;

class Student{

public:

    string name;

    void display(){
        cout << "Hello " << name << endl;
    }

};

int main(){

    //initializing regular object
    Student robi;
    //assigning value
    robi.name = "Robi";
    //calling the property
    robi.display();

    //initializing pointer object
    Student *choity = new Student();
    //assigning value
    choity->name = "Choity";
    //calling the property
    choity->display();

    return 0;
}
