/*
Function overloading is the idea of creating more than one function with the same name that takes different types of data
*/

#include<iostream>
using namespace std;

void printNum(int x)
{
    cout << "It's integer " << x << endl;
}

void printNum(float x)
{
    cout << "It's float " << x << endl;
}

int main()
{
    int a = 50;
    float b = 25.50;
    printNum(a);
    printNum(b);

    return 0;
}
