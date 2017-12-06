/*
1. Friend function is a function which is not a member of a particular class but can use the members(property/method)of that class.
2. Syntax is:  friend DataType FunctionName(ClassName object).
3. We use 'friend' keyword before the function to state it as a friend function
*/

#include <iostream>
using namespace std;
class Student{
private:

    string name;
    int id;

public:

    Student(string n, int i){
        name = n;
        id = i;
    }

    // calling a friend function
    friend void info(Student obj);
};

void info(Student obj){
    cout<<obj.name <<endl <<obj.id <<endl;
}


int main(){
    // passing parameter to constructor
    Student mahmud("mahmud",25);
    // passing the object to the friend function as a parameter
    info(mahmud);
    return 0;
}
