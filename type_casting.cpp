#include <iostream>
using namespace std;


//Type casting is the process of changing the data type of a variable to another data type
int main(){


    int a;
    double b = 2.55;
    a= b;//Implicit type cast
    cout << a << endl;

    //Explicit type cast
    //Change b int an integer and assign it to a
    a=(int)b;
    cout << a << endl;

    return 0;
}