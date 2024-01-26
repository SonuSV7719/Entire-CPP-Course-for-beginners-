#include<iostream>

using namespace std;

int main(){
    // Array --> i can store multiple values of same data type in contiguous manner

    // int a = 2;
    int a; // defination
    int b = 22; // declaration

    // Syntax:

    // datatype array_name[how_much_values(it_is_num)] = {value1, value2, ...};


    // int nums[5] = {2, 4};
    // index -->  0  1  2  3  4 
    int num[5] = {2, 3, 4, 5, 6}; // declaration

    cout << num[3]<< endl;

    int num1[5];

    num1[3] = 2;
    // num1[6] = 3; --> error

    cout << num1[3] << endl;

    return 0;
}