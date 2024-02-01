#include<iostream>

using namespace std;

// Syntax of function
// [] --> represent optional in syntax

// return_Type function_name([datatype para1, datatype para2, .....]){
//     // code / logic

//     [return express]
// }
// void --> You are not returning anything from function specified by void


//Declaration of function
int multiplication(int num1, int num2); // Declared 

int addition(int num1, int num2){
    int sum = num1 + num2;
    return sum;

    cout << sum << endl;
}

void addition(int num1, int num2, int num3){
    int sum = num1 + num2 + num3;

    cout <<"Inside addition 3: "<< sum << endl;
}

// Default Parameter function

int addtion1(int a = 1, int b = 1){
    return a + b;
}
// 
int greatestBet2(int a, int b){
    if (a > b){
        return a;} // a = 2 > 4
    // }else{
    //     return b;
    // }

    return b; // b = 4
}
int main(){

    // int num1 = 55

    //1. Why ? --> Solve reusablity problem --> by function

    // int a = 2;
    // int b = 44;
    // int c = a + b;
    // cout << c<< endl;

    // int a = 2;
    // int b = 44;
    // int c = a + b;
    // cout << c<< endl;

    // 2. What is function --> function is a block of code which can be used multiple times just by calling it

    // Calling function syntax

    // function_name(actual value1, actual value2, ....)

    // int a = 4;
    // cout << 4;
    // int num = greatestBet2(4, 2);
    // cout << greatestBet2(4, 2);
    int sum = addition(55, 100);
    sum = addition(5, 8);

    addition(1, 2,3);

    cout <<"Sum : " <<  sum << endl;

    // create function to find number is even or odd

    int mul = multiplication(22, 44);

    cout << mul <<endl;

    cout << "Addition: " << addtion1(2, 7) << endl;


    return 0;
}



// Defination of function
int multiplication(int num1, int num2){
    // int mul  = num1 * num2;
    // return mul;
    return num1 * num2;
}