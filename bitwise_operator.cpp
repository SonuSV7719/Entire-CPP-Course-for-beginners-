#include<iostream>

using namespace std;

int main(){


    // Bitwise operators

    // &(and), |(or), ^(Xor), ~, <<, >> 

    // 101 & 101 == 

    // 1    0      1
// &
    // 1    0       1

    // 1    0        1

    cout << (5 & 2) << endl;  

    // 101
    // 010
    // 000 --> decimal 0

    cout << (7 & 3) << endl; // output --> 3

    cout << (8 & 2) << endl;


    
    //| (Or)

    cout << ( 7 | 3) << endl;


    // ^ (Xor)

        // XOR (^)
    // A              B                        xor output

    // 1(true)      1(true)                     0 (true)

    // 1(true)      0(false)                    1(false)

    // 0 (false)    1(true)                     1(false)

    // 0(false)     0(false)                    0(false) 


    // use case 

    // 22 ^ 22 == 0   

    cout << "Xor" << ( 7 ^ 7 )<< endl;

    cout << "Xor example " << (7 ^ 2) << endl;

    // not

    cout << "not bitwise op: " << (~1) << endl;


    // << (left shift operator)

    // example

    int num33 = 1;

    cout << "Left shift operator example : "<< (num33 << 3) << endl;

    cout << "left shift example 2: " << (3 << 2) << endl;

    cout << "Left shift example 3: " << (5 << 3) << endl;

    // >> (right shift operator)

    cout << "Right Shift Example 1: " << ( 1 >> 2) << endl;
    cout << "Right shift example 2: " << (7 >> 2) << endl;

    cout << "Right shift example 3 : " << (8 >> 2) << endl;

    cout << "Right shift example 4: " << (11 >> 2) << endl;

    cout << "Right shift example 5: " << (22 >> 3) << endl;


    // Steps to convert any number to binary

    // 1. check the nearby power of 2 to the given number
    // 2. substract the number and power to get difference between them 
    // 3. again repeat step 1, 2


    

    return 0;
}