#include <iostream>
using namespace std;

class Student{
private:
    int age;
    string name;
public:
    void setAge(int a){
        // using this pointer to set the value of the variable
        this->age = a;
    }

    void display(){
        cout << age << endl;

    }
};

int main(){
   Student obj;
   obj.setAge(25);
   obj.display();
   return 0;
}
