#include<iostream>

using namespace std;

int main(){


    // Logical operators 

    // &&(and), ||(or), !(not)

    // Output --> true or false --> bool

    // And (&&)
    // A              B                        output

    // 1(true)      1(true)                     1 (true)

    // 1(true)      0(false)                    0(false)

    // 0 (false)    1(true)                     0(false)

    // 0(false)     0(false)                    0(false)    


    cout << "And operator example : " << ((2 < 3) && (3 < 2) && (3 > 2)) << endl;

    // OR (||)
    // A              B                          output

    // 1(true)      1(true)                     1 (true)

    // 1(true)      0(false)                    1(true)

    // 0 (false)    1(true)                     1(true)

    // 0(false)     0(false)                    0(false)   


    cout << "Or operator example: " << ((2 < 3) || (3 < 2) || (3 > 2)) << endl;

    // Not (!)
    // A             output

    // 1(true)        0(true)

    // 0(true)        1(true)


    cout << "Not logical operator : " << (!(false)) << endl;

    return 0;
}