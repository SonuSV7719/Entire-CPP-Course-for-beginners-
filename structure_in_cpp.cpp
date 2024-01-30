#include<bits/stdc++.h>

// Structures --> it is user defined data type 

// Syntax

// struct struct_name
// {
//    variable
//    function
// };

using namespace std;
// Code reusability
struct Car{
    string color;
    int carNo;


    void drive(int carn){
        cout<< "Car is Driving....." << carn <<endl;
    }
};


int main(){

    Car c1;
    Car c2;

    c1.carNo = 1;

    cout << c1.carNo <<endl;
    cout << c2.carNo << endl;
    c1.drive(c1.carNo);
    c2.carNo = 2;
    c2.drive(c2.carNo);

    Car c3 = { "Yellow", 3}; // Difine

    cout << c3.color << endl;
    cout << c3.carNo << endl;

    return 0;
}