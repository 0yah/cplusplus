#include <iostream>

using namespace std;

int main(){

    int res;
    /*
    Relational Operators


    Greater Than >
    Less than <
    Equal to ==
    Identical to ===
    Greater than or equal to >=
    Less than or equal to <=
    
    Logical Operators
    && AND
    || OR
    ! NOT
    */

    res = (6<=6) || (5<3);
    cout << res << endl;

    res = (6<=6) && (5<3);
    cout << res << endl;
    

    res = !(6<=6);
    cout << res << endl;

    res = 5<3?1:0;
    cout << res << endl;
    
    return 0;
}