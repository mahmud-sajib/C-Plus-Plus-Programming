/*
1. Exception handling is done with the help of try, catch and throw block
2. We will put that code within the try block that may produce an error
3. If the codes in try block produces an error we will throw that exception
4. Catch block will hold that exception and the codes of catch block will be executed at that time
*/

#include <iostream>
using namespace std;

int main(){
    int a, b, result;
    cout << "Enter a and b: " << endl;
    cin >> a >> b;

    try
    {
        if(b==0)
        {
            throw b;
        }
    result = a/b;

    } catch(int ex)
    {
        cout << "Exception: Divide by zero not allowed " << ex;
    }

    cout << "Division is: " << result;

    return 0;
}
