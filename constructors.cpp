/*
1. Constructor has the same name as Class Name and it has no data type.
2. Constructor is called automatically when we initialize it.
3. We can access the private properties through constructor
*/

#include <iostream>
using namespace std;

class Student{
private:
    int length;

public:
    // defining a constructor class
    Student(){
        length = 21;
        cout<< "This is a constructor which is " << length << " letters long. " <<endl;
    }
};

int main(){
    Student obj;
    return 0;
}

