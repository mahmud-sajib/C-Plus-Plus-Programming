/*
1. Normally each Object has it's unique variable for a given Class. Static variable is used when objects need a common variable to share within them.
2. A Static variable replaces it's previous memory location each time it is called and takes the final value it's assigned to.
3. Static variable is declared outside the class.
4. Static function/method can only have static variable within it.
5. Static variable or function starts with the keyword 'static'.
6. Normal function can use static variable but Static function can't use normal variable
*/

#include <iostream>
using namespace std;
class Student{
private:

    int id;
    int marks;
    //static variable
    static int counter;

public:
    void setData(int i, int m, int c){
        id = i;
        marks = m;
        counter = c;
    }

    void display();

    //static method
    static void getCount(){
        cout<<"The static count value is "<<counter<<endl;
    }
};

//initializing static variable
int Student::counter=0;

void Student::display(){
    cout<<"The id is: " <<id<<endl;
    cout<<"The marks is: " <<marks<<endl;
    cout<<"The static counter value is: " <<counter<<endl;
}

int main(){
    Student obj1;
    Student obj2;
    Student obj3;

    obj1.setData(1,100,10);
    obj2.setData(2,200,20);
    obj3.setData(3,300,30);

    obj1.display();
    obj2.display();
    obj3.display();

    // calling static method
    Student::getCount();
    return 0;
}
