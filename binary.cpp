#include <iostream>
#include <string> 
//This program changes decimal numbers to binary
using namespace std;


void binary(int input){


    int number;
    int rem;

    do
    {
    number = input/2;//1
    rem = input % 2;//0
    input = number;

    //The correct result is the reverse of the output
    cout << rem; 

    }
    while (number !=0);
    
    
    

}

int main(){


    int input = 2;
    binary(input);


    return 0;
}