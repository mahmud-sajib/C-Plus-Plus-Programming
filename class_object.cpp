/*
 Creating a basic class and an object
*/

#include <iostream>
using namespace std;
class Hello{
public:
    void display(){
        cout << "Hello There!" << endl;
    }
};

int main(){
    // initializing the object
    Hello obj;
    //calling the property
    obj.display();
    return 0;
}
