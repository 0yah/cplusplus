#include <iostream>

using namespace std;

int main(){


    //Constants are variables that do not change during runtime
    const int LENGTH = 10;
    const int WIDTH =5;
    const char NEWLINE = '\n';

    int area = LENGTH * WIDTH;
    cout << "Area : " << area << NEWLINE;

    return 0;
}