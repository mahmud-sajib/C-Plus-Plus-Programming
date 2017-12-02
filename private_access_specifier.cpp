/*
  Working with private access specifier
*/


#include <iostream>
using namespace std;
class Student{

private:

    // declaring a private property
    int age;

    // declaring a private method
    int myAge(){
        return age-5;
    }

public:

    // assigning the private property to a public property
    void setAge(int a){
        age = a;
    }

    // printing private method in a public method
    void getAge(){
        cout << myAge();
    }

};


int main(){

    Student obj;
    // assigning value to the method
    obj.setAge(20);
    // calling the method
    obj.getAge();

    return 0;

}
