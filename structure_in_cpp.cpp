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


struct Vehical{
    int wheels = 2;
    string color = "Default";
    int chaseNo = 0;
    string vehicalName = "Tata";

    void drive(){
        cout << "Driving a " <<  this->vehicalName<<endl; // BMW->vehicalName this --> Refering to current object
    }

    void breakV(){
        cout << "Break is applied to  " <<this->vehicalName << endl;
    }

    void turnLeft(){
        cout << "Left turn taken " << vehicalName << endl;
    }

    void turnRight(){
        cout << "Right turn taken" << vehicalName << endl;
    }

};



int main(){

    // Car c1;
    // Car c2;

    // c1.carNo = 1;

    // cout << c1.carNo <<endl;
    // cout << c2.carNo << endl;
    // c1.drive(c1.carNo);
    // c2.carNo = 2;
    // c2.drive(c2.carNo);

    // Car c3 = { "Yellow", 3}; // Difine

    // cout << c3.color << endl;
    // cout << c3.carNo << endl;
    // using .(dot ) operator you can access variables and functions inside structure
    Vehical tata;

    cout << "Wheels in my tata vehical: " << tata.wheels << endl;
    cout << "Color of my tata vehical: " << tata.color << endl;
    cout << "Chase no: " << tata.chaseNo << endl;
    cout << "Name : " << tata.vehicalName << endl;
    tata.drive();

    Vehical BMW; // object 

    BMW.wheels = 4;

    BMW.color = "White";

    BMW.chaseNo = 342;

    BMW.vehicalName = "BMW";


    cout << "Wheels in my BMW vehical: " << BMW.wheels << endl;
    cout << "Color of my BMW vehical: " << BMW.color << endl;
    cout << "Chase no: " << BMW.chaseNo << endl;
    cout << "Name : " << BMW.vehicalName << endl;

    BMW.drive();


    BMW.turnRight();

    Vehical* CopyBMW = &BMW;

    // If object is pointer then u need to use -> (arrow ) symbool to access functions and variable 
    // inside structure

    // if object is not a pointer then u need to use (.) to access functions and variables inside structure

    cout << "Wheels in my BMW vehical: " << CopyBMW->wheels << endl;
    cout << "Color of my BMW vehical: " << CopyBMW->color << endl;
    cout << "Chase no: " << CopyBMW->chaseNo << endl;
    cout << "Name : " << CopyBMW->vehicalName << endl;



    return 0;
}