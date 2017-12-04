#include <iostream>
#include <string>

using namespace std;

class Human{
private:
    // declaring pointer
    string *name;
    int *age;
public:
    // defining constructor
    Human(string iname, int iage){
        //allocating memory location dynamically
        name = new string;
        age = new int;

        *name = iname;
        *age = iage;
    }

    void display(){
    cout << "Hi i am "<<*name<<" and i am "<<*age<<" years old"<<endl;
    }

    // defining destructor
    ~Human(){
    delete name;
    delete age;
    cout << "all memories are released"<<endl;
    }


};

int main()
{
    Human *obj = new Human("Sammy",24);
    obj->display();
    delete obj;

    return 0;
}
