#include <iostream>

using namespace std;

int main()
{
    // Problem 1:

    //     A computer salesman gets commission on the following basis:
    //         	Sales             	   	Commission Rate
    //         	Rs. 0 - 20,000             	 	3%
    //         	Rs. 20,001 - 50,000       	         12%
    //         	Rs. 50,001 and more     	         31%
    // After accepting the sales as input, calculate and print his commission amount and rate of commission.

    int rate = 0;
    double commission = 0.0;

    int sales = 20000;
    if (sales <= 20000)
    {
        rate = 3;
        commission = sales * 0.03;
    }
    else if (sales >= 20001 && sales <= 50000)
    {
        rate = 12;
        commission = sales * 0.12;
    }
    else
    {
        rate = 31;
        commission = sales * 0.31;
    }
    cout << "Commission Rate : " << rate << "%" << endl;
    cout << "Commission Amount : " << commission << endl;

    //=======================================================================

    // Problem 2

    // Write a program to enter the three sides of a triangle. Decide whether it is a scalene, isosceles or equilateral triangle.

    int a = 22;
    int b = 23;
    int c = 23;

    if (a == b && b == c && c == a)
        cout << "Equileteral Triangle" << endl;
    else if (a != b && b != c && c != a)
        cout << "Scalean Triangle" << endl;
    else
        cout << "Isoceles Triangle" << endl;

    // Problem 3

    // A library charges fine for books returned late. Following are the fines: first five days 40 paisa per day, Six to ten days 65 paisa per day, above 10 days 80 paisa per day. Design a program to calculate the fine assuming that a book is returned N days late.

    double fineAmount = 0;
    int days = 4;
    if (days <= 5)
        fineAmount = days * .40;
    if (days >= 6 && days <= 10)
        fineAmount = days * .65;
    if (days > 10)
        fineAmount = days * .80;
    cout << "FINE AMOUNT (Rs.) : " << fineAmount << endl;

    // Problem 4
    // The telephone department wishes to compute monthly telephone bills for its customers using the following rules. Minimum Rs. 250 for first 80 message units, plus 60 paise per unit for next 60 units, plus 50 paise per unit for next 60 units, plus 40 paise per unit for any units above 200. Write a program that calculates the monthly bill, with input MESSAGE (the number of message units) and CUSTNO (the registration number of a customer). Then Display the bill in following format.
    //         	CUSTOMER NO :
    //         	MESSAGE UNITS :
    //         	AMOUNT (Rs.) :

    int messageUnit = 70;
    int customerNo = 1;

    double bill = 0;
    if (messageUnit <= 80)
        bill = 250;
    else if (messageUnit > 80 && messageUnit <= 140)
        bill = 250 + (messageUnit - 80) * 0.60;
    else if (messageUnit > 140 && messageUnit <= 200)
        bill = 250 + 36 + (messageUnit - 140) * 0.50;
    else if (messageUnit > 200)
        bill = 250 + 36 + 30 + (messageUnit - 200) * 0.40;

    cout << "CUSTOMER NUMBER : " << customerNo << endl;
    cout << "MESSAGE UNIT : " << messageUnit << endl;
    cout << "BILL AMOUNT : " << bill << endl;

    // Problem 4 :
    // Write a program to compute Bi-monthly telephone charges for subscriber. Use the following information:
    // 	Fixed Bi-monthly rent: Rs.380
    // 	Free calls during two months: 120
    // 	Charge/call beyond free limits upto 100 calls: Rs.1
    // 	Charge per call in excess of 100 calls: Rs. 1.25
    int calls = 140;
    double bill = 280.0;
    if (calls > 120 && calls <= 220)
        bill = bill + (calls - 120) * 1;
    else if (calls > 220)
        bill = bill + 100 + (calls - 220) * 1.25;
    cout << "Bill amount  : " << bill << endl;

    // HOmework Problem 1 :
    // A security man paid at the hourly rate (R) for the first 40 hours of work in a week. Thereafter, he is paid at 1.25 times of the hourly rate (R) for the next 16 hours and at 1.5 times of the hourly rate (R) for the further hours of work in the week. Taking the numbers of hours (H) and the rate per hour (R) as input, the weekly wages (W) is to be calculated.

    

    return 0;
}