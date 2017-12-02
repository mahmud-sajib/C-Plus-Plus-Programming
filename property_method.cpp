/*
  Creating property & method and assigning values to property & method through objects
*/

#include <iostream>
#include <string>
using namespace std;

class Students{

public:

    string name;

    void introduce()
    {
        cout << "Hello I am " << name << endl;
    }
};



int main(){

    // initializing the first object
    Students sujana;
    //assigning value
    sujana.name = "Sujana";
    //calling the property
    sujana.introduce();

    // initializing the second object
    Students micahel;
    //assigning value
    micahel.name = "Micahel";
    //calling the property
    micahel.introduce();

    return 0;

}
