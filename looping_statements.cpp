#include<iostream>

using namespace std;

int main(){
    // Looping statement

    // Three main problems we gone a face when we don't know about loooping statement
    // 1. Repeating
    // 2. Increasing lot of lines in our code
    // 3. Very tidious 

    //Problem: Printing 1- 100

    // 1. for loop 

    // Syntax 

    // for (start variable; condition; increment){
    //     //code 
    // }
    // Scope Concept 
    int a = 2; // global
    // --> 1. global Scope
    // --> 2. Local Scope

    {
        cout << a << endl;
        // int b = 2;
        {
            cout << a << endl;
            int b = 2; // local
        }

        // cout << b << endl; // give me undefined error
    }

    for(int i = 1; i <= 10; i++){
        cout << i << endl;
    }


    for(int i = 1; i <= 10; i+= 2){
        cout << i << endl;
    }


    for(int i = 10; i <= 1; i--){
            cout << i << endl;
    }

    // for(int i = 10; i <= 1; ){
    //         cout << i << endl;
    // }


    // 2. while

    // Sytax

    // declare start variable 
    // while(condition){
    //     //code 
    //     increment
    // }
    int i = 1;
    while(i <= 10){
        cout << i << endl;
        i++;
    }

    // cout << i << endl; --> output --> 13

    // Infinite loop
    // int j = 1;
    // while(j <= 10){
    //     cout << j << endl;
    // }


    // Nested loops concept--> loop inside loop

    // 1 , 2, 3 --> 4 times 

   for(int i = 0; i < 4; i++){
     for (int j = 1; j <= 3; j++){
        cout << j << endl;
    }
   }

    // pattern 1.
    
    // ****
    // ****
    // ****
    // ****
    int n;
    cout << "Enter n: ";
    cin >> n;
     for(int i = 1; i <= n; i++){
            for(int j = 1; j <= n; j++){
                cout<<"*"<<" ";
            }
            cout<<endl;
    }
    




    return 0;
}