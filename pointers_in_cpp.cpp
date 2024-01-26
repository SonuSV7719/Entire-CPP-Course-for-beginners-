#include<bits/stdc++.h>

using namespace std;

int main(){

    //1. Pointers --> They are special type of variable which can store memory address of other variable
                // --> Used to get reference of variable to avoid copy
                // --> Syntax 
                // type_of_pointer *variable_name = variable_address;

    int a = 22;

    int b = a; // a's copy got stored into a
    cout << "====================Intial==================="<<endl;
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;

    // if i change b then a will change or not 
    cout << "====================After==================="<<endl;
    b = 33;

    cout << "a: " << a << endl;
    cout << "b: " << b << endl;

    // if i change b then a should also get change
    int *c = &a;

    *c = 101;

    cout << a <<endl;

    // Concepts

    //1. How to get address of any variable 

    // &(am percent) --> to get address of any variable

    int num = 3427;

    cout << "Value of num: " << num << endl;
    cout << "Address of num: " << (&num) << endl; // Hexadecimal


    int *ptr = &num; // Pointer used to store address

    // int ptr = &num; // not valid cause problem(error)

    cout << "value of ptr: " << ptr << endl;
    cout << "Value of num extracted using ptr: " << *ptr << endl;

    *ptr = 423979;

    cout << num << endl;

    /// Example 
    string str = "abc";

    string *ptr1 = &str;


    cout << "str address using ptr1: "<< ptr1 <<endl;
    cout << "value of str using ptr1: "<< *ptr1 << endl;

    // Reference
    float num2 = 22;
    float &ref = num2; // Not creating copy 
    cout << "value of str using num2: : "<< num2 << endl;
    ref = 33;
    cout << "value of str using num2: : "<< num2<< endl;
    cout << "value of str using ref: : "<< ref<< endl;


    return 0;
}