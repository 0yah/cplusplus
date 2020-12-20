#include <iostream>

using namespace std;

int main(){


    /*
    Bitwise Operators
    & AND
    | OR
    ^ XOR
    ~ Complement
    << Shift Left
    >> Shift Right
    
    */

   //XOR Returns true if only one of the operands are true
    int XA = 5;
    int XB = 12;


    //The variables XA and XB are first converted to binary then XOR is performed then changed back to decimal
    cout << "a ^ b = "<< (XA^XB)<<endl;

   //~ returns the complement of 
    int CA = 5;
    
    //The variables XA and XB are first converted to binary then XOR is performed then changed back to decimal
    cout << "Complement of a  is "<< (~CA)<<endl;


    return 0;
}