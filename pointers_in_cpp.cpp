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

    //==============================================================================================

    //2.  Reference
    float num2 = 22;
    float &ref = num2; // Not creating copy 
    cout << "value of str using num2: : "<< num2 << endl;
    ref = 33;
    cout << "value of str using num2: : "<< num2<< endl;
    cout << "value of str using ref: : "<< ref<< endl;

    cout << "Address of num2 : " << (&num2) <<endl;
    cout << "Address of ref: " << (&ref) <<endl;

    //==============================================================================================

    //3. Double Pointers

    string str2 = "XYZ";

    string *strPtr = &str2;

    string **doublePtr = &strPtr;

    string ***triplePtr = &doublePtr;

    cout << "Str2 Address: " << (&str2) << " strPtr: " << (&strPtr) << "Value of strPtr: "<< (strPtr)<<endl;

    cout << "Memory address of str2 using strptr: " << strPtr <<endl;
    cout << "Memory address of strPtr using doublePtr: " << doublePtr <<endl;
    cout << "Memory address of doublePtr using triplePtr: " << triplePtr <<endl;
    cout << "Value of str2 using strPtr: " << (*strPtr) << endl;

    *strPtr = "abc";
    cout << "Value of str2: " << (str2) << endl;
    cout << "Value of str2 using strPtr: " << (*strPtr) << endl;
    cout << (**doublePtr) << endl;


    // 1. How to get address of any
    // 2. How to make pointer
    // 3. How to find address of variable which stored inside pointer using pointer only
    // 4. How to get value of variable using pointer where the variable address stored 
    // 5. How to update value using pointer



    return 0;
}