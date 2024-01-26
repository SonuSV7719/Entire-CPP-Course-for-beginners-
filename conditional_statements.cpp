#include <iostream>

using namespace std;

int main()
{

    // 1. Conditional Statements in cpp

    // 1. if... else or if... else if... else

    // 2. switch case

    // 1. if....else --> used with realational operators & logical operator

    // Example 1.

    int num = 2;
    int num1 = 3;
    // syntax
    // if (condition){

    // } else{

    // }

    if (num1 < num)
    {
        cout << "Num1 is greater num" << endl;
    }
    else
    {
        cout << "Num1 is not greater than num" << endl;
    }
    // if... else if ...else if ....... else
    // syntax:
    // if (condition){
    // what you has do
    // } else if (condition) {

    // }else if (condition){
    // }
    // else{

    // }

    int num2 = 22;
    int num3 = 55;
    int num4 = 44;

    if (num2 > num3)
    {
        cout << "num2 is greater than num3" << endl;
    }
    else if (num2 > num4)
    {
        cout << "num2 is greater than num4" << endl;
    }
    else if (num3 > num4)
    {
        cout << "num3 is greater than num4" << endl;
    }
    else if (num3 > num2)
    {
        cout << "num3 is greater than num2" << endl;
    }
    else
    {
        cout << "num4 is greater than" << endl;
    }

    // Nestest if..else or if... else if ...else if ....... else(if else inside if else)

    // Example 1.

    if (2 > 3)
    {
        if (3 > 2)
        {
            cout << "3 is greater " << endl;
        }
        else
        {
            cout << "2 is greater than3" << endl;
        }
    }
    else
    {
        if (3 > 2)
        {
            cout << "3 is greater " << endl;
        }
        else
        {
            cout << "2 is greater than3" << endl;
        }
    }

    // 1. Find out greatest number between two number

    // example a = 22, b = 33
    // output --> 33 is greater than 22

    // How to take input from user
    int a, b;
    cout << "Enter num1 : ";
    cin >> a;

    // cout << a <<endl;

    cout << "Enter num2 : ";
    cin >> b;

    if (a > b)
    {
        cout << a << " is greater than " << b << endl;
    }
    else
    {
        cout << b << " is greater than " << a << endl;
    }

    string name = "xyz";
    string name1 = "xyx";
    string name2 = "abc";
    string name3 = "abc";

    if (name == name1 && name2 == name3)
    {
        cout << "name1 and name are equal and name2 and name3 are equal" << endl;
    }
    else
    {
        cout << "Both condition are not true that's why are in else block" << endl;
    }

    if (name == name1 || name2 == name3)
    {
        cout << "name1 and name are equal and name2 and name3 are equal" << endl;
    }
    else
    {
        cout << "Both condition are not true that's why are in else block" << endl;
    }

    // 2. you have to take three numbers from user and you have to find greatest number among them(two approaches 1. nestest if else 2. multiple conditions or (Logical operator with realtional op))

    int l1, l2, l3;

    cout << "Enter num1, num2, num3: ";
    // Giving Multiple input at same time
    cin >> l1 >> l2 >> l3;

    // Nested if else
    if (l1 > l2)
    {
        if (l1 > l3)
        {
            cout << l1 << " is the greatest among all numbers" << endl;
        }
        else
        {
            cout << l3 << " is the greatest among all numbers" << endl;
        }
    }
    else if (l2 > l1)
    {
        if (l2 > l3)
        {
            cout << l2 << " is the greatest among all numbers" << endl;
        }
        else
        {
            cout << l3 << " is the greatest among all numbers" << endl;
        }
    }
    else
    {
        cout << l3 << " is the greatest among all numbers" << endl;
    }

    // Using Logical Operator with relational op

    if (l1 > l2 && l1 > l3)
    {
        cout << l1 << " is the greatest among all numbers" << endl;
    }
    else if (l2 > l1 && l2 > l3)
    {
        cout << l2 << " is the greatest among all numbers" << endl;
    }
    else
    {
        cout << l3 << " is the greatest among all numbers" << endl;
    }

    // 3.calculate the Simple Interest.
    // Write a program to calculate the simple interest based on principal amount, rate, and time provided by the user. The simple interest formula is Simple Interest = (Principal * Rate * Time(days)) / 100.

    int p = 2000;
    float r = 10.10;
    int t = 10;

    float si = (p * r * t) / 100;
    cout << si << endl;

    // 4. Calculate the area of a triangle, square, circle, rectagle also add perimeter

    // 5. Write a program with supporting documentation to enter any three real numbers and calculate X where:
    // X  =  Product of integer portion/ Sum of decimal portion

    // example a = 22.21
    // b = 33.32
    // c = 44.43
    // x = (22 * 33 * 44 )/(0.21 + 0.32 + 0.43)

    // float a = 22.21;
    // int iteger = a;

    float n1 = 22.21;
    float n2 = 33.32;
    float n3 = 44.43;

    int nint1 = int(n1);
    int nint2 = (int)n2;
    int nint3 = n3;

    float x = (nint1 * nint2 * nint3) / ((n1 - nint1) + (n2 - nint2) + (n3 - nint3));

    cout << x << endl;

    // Conditional statement type 2
    // 2. switch case --> integer cases 

    // Syntax

    // switch (variable(Integer)){
    //     case case1:
    //         // code
    //         break
    //     case week:
    //         //code
    //         break

    //     ...
    //     ...
    //     ....
    //     ...
    //     default: -------------------------> optional
    //         //code
    //         break

    // }

    // Example 1:

    // problem : user will give us week numbers and we want to display respective
    // week in words
    // asume = [1 ==> Sunday, 2 ==> Monday...]

    int week = 3;

    if (week == 1)
    {
        cout << "1 ==> Sunday" << endl;
    }
    else if (week == 2)
    {
        cout << "2 ==> Monday" << endl;
    }
    else if (week == 3)
    {
        cout << "3 ==> Tue" << endl;
    }
    else if (week == 4)
    {
        cout << "4 ==> Wed" << endl;
    }
    else if (week == 5)
    {
        cout << "5 ==> Thu" << endl;
    }
    else if (week == 6)
    {
        cout << "6 ==> Fri" << endl;
    }
    else if (week == 7)
    {
        cout << "7 ==> Sat" << endl;
    }
    else
    {
        cout << "You have entered wrong week" << endl;
    }


    cout << "=======================Without Break===================================" << endl;

    switch (week)
    {
        case 1:
            cout << "1 ==> Sunday" << endl;
        case 2:
            cout << "2 ==> Monday" << endl;
        case 3:
            cout << "3 ==> Tue" << endl;
        case 4:
            cout << "4 ==> Wed" << endl;
        case 5:
            cout << "5 ==> Thu" << endl;
        case 6:
            cout << "6 ==> Fri" << endl;
        case 7:
            cout << "7 ==> Sat" << endl;
        default:
            cout << "You have entered wrong week" << endl;
    }

    cout << "===============With Break===================="<<endl;

    switch (week)
    {
        case 1:
            cout << "1 ==> Sunday" << endl;
            break;
        case 2:
            cout << "2 ==> Monday" << endl;
            break;
        case 3:
            cout << "3 ==> Tue" << endl;
            break;
        case 4:
            cout << "4 ==> Wed" << endl;
            break;
        case 5:
            cout << "5 ==> Thu" << endl;
            break;
        case 6:
            cout << "6 ==> Fri" << endl;
            break;
        case 7:
            cout << "7 ==> Sat" << endl;
            break;
        default:
            cout << "You have entered wrong week" << endl;
    }

    // Example/Problem 2:
    // user will give u months(int) and u need to display months in word(string)
    // example 1 = Jan , 2 = Feb......

    // Problem 1.: check weather the given number is divisible by 5 or not

    int wap;

    cout << "Enter number: " ;
    cin >> wap;

    if (wap % 5 == 0){
        cout << wap << " is divisible by 5" << endl;
    }else{
        cout << wap << " is not divisible by 5" << endl;
    }

    int d = 3;

    if (d % 5 == 0){
        cout << "divible" <<endl;
    }else{
        int rem = d % 5;
        cout << (d-rem) <<endl;
    }



    return 0;
}