#include<iostream>

using namespace std;

int main(){
    // Increment and decrement op 

    // ++, --
    // |  
    // _______ >>>1. preincrement op ++variable_name
            //    2. postincrement op variable_name++
            //    3. predecrement op --variable_name
            //    4. postdecrement op variable_name--

    
    // int a = 1;

    // // a = a + 2;
    // // a += 2;

    // a++;

    // cout << a << endl;

    // a--;
    // cout << a << endl;


    int a = 2;
    // cout << a++ <<endl;
    // int b = ++a;
    // cout << b<<endl;

    // int b = a++;
    // cout << b <<endl;

    // int c = ++a;
    // cout << c << endl;

    // int b = a--;
    int b = --a;
    cout << b << endl;

    return 0;
}