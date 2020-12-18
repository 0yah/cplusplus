#include <iostream>

using namespace std;

//Variables are storage locations in the computer memory

int main(){

    int num1,num2,sum=0;
    

    cout << "Enter any two numbers to find sum: \n";
    cin >> num1 >> num2;//Get user input
    sum = num1+ num2;

    cout << "\nThe sum of the two numbers are : " << sum << endl;
    return 0;
}