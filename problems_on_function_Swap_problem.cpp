#include<bits/stdc++.h>
using namespace std;
// Problem is inside function value is swapped but output of function it not swapped 
// void swap(int a, int b){
//     int temp;
//     temp = a;
//     a = b;
//     b = temp;

//     cout << "A value is in swap func: " << a << "b value in swap func: " << b << endl;
// }

// Using pointers --> don't create copy of the variable 
void swap(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;

    cout << "A value is in swap func: " << *a << "b value in swap func: " << *b << endl;
}

// Reference --> Don't create copy of the variable

// int a = 4;

// int &c = a;

void swap1(int &a, int &b){
    int temp;
    temp = a;
    a = b;
    b = temp;

    cout << "A value is in swap1 func: " << a << "b value in swap1 func: " << b << endl;
}

// NEsted function

// int addtion2(int a, int b){

//     void print(){
//         cout << "print";
//     }

//     print();
// }

int main(){

    // Swap number without function
    // a = 5;
    // b = 6;
    //output
    // a = 6;
    // b = 5

    int a = 5;
    int b = 6;

    cout << "Before swap : " << endl;
    cout <<"a: " <<  a << " b: " << b << endl;

    // a = b; --> a value will not exist then
    // b = a;

    int temp;

    temp = a;

    a = b;

    b = temp;

    cout << "After swap : " << endl;
    cout <<"a: " <<  a << " b: " << b << endl;


    // SOlving problem without temp variable

    a = a + b;

    b = a - b;

    a = a - b;

    cout << "After swap : " << endl;
    cout <<"a: " <<  a << " b: " << b << endl;

    a = a * b;

    b = a / b;

    a = a / b;

    cout << "After swap : " << endl;
    cout <<"a: " <<  a << " b: " << b << endl;

    // Now we have to solve this problem using function

    // swap(a, b);

    // cout << "A value outside the func: " << a << "b value outside the func: " << b << endl;


    // Solution of the problem

    swap(&a, &b);
    cout << "A value outside the func: " << a << "b value outside the func: " << b << endl;
    swap1(a, b);
    cout << "A value outside the func: " << a << "b value outside the func: " << b << endl;
    return 0;
}