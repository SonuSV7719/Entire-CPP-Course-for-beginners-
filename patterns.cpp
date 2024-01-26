#include<iostream>

using namespace std;

int main(){
    // for --> u know the ending(Ending is definite)

    // while --> u dont know about end(indefinte)

    // Problem to solve with while 

    // Take infinte number of inputs from user and if user says no to you then u need to stop
    // bool loop = true;
    string userInput;
    // while (loop)
    // {

    //     cout << "Enter any thing if you enter no i will stop: ";
    //     cin >> userInput;

    //     if (userInput == "no"){
    //         loop = false;
    //     }
    // }

    // 1. continue statement
    // 2. break statement --> stoping loop at that point of time 
  

    // 2. break
    while (true)
    {

        cout << "Enter any thing if you enter no i will stop: ";
        cin >> userInput;

        if (userInput == "no"){
            break;
        }
    }

    // 1. continue

    for(int i = 1; i <= 10; i++){
        if (i == 3){
            continue;
        }

        cout << i << endl;
    }

    // Pattern 2
    // *
    // **
    // ***
    // ****

    int n = 4;
    for(int i = 1; i <= 4; i++){
        for(int j = 1; j <= i; j++){
            cout << "*";
        }
        cout << endl;
    }

    cout << "==================================================="<<endl;
     // Pattern 3
    // 1
    // 12
    // 123
    // 1234
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            cout << j;
        }
        cout << endl;
    }
    cout << "==================================================="<<endl;

    // Pattern 3
    // 1
    // 22
    // 333
    // 4444
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            cout << i;
        }
        cout << endl;
    }

    cout << "==================================================="<<endl;


    // ****
    // ***
    // **
    // 


    for(int row = n; row >= 1; row--){
        for(int col = 1; col <= row; col++){
            cout << "*";
        }
        cout << endl;
    }
cout << "==================================================="<<endl;

    // 1234
    // 123
    // 12
    // 1

    for(int row = n; row >= 1; row--){
        for(int col = 1; col <= row; col++){
            cout << col;
        }
        cout << endl;
    }
    cout << "==================================================="<<endl;

    //            *
    //         *  *  *
    //     *   *  *  *   *
    // *   *   *  *  *   *    *

    // n - row + 1 --> spaces
    // 2 * row - 1 --> star

    for (int row = 1; row <= n; row++){
        // Space loop 

        for (int space = 1; space <= n - row; space++){
            cout << " ";
        }
        // star loop
        for (int star = 1; star <= 2 * row - 1; star++){
            cout << "*";
        }
        //space loop
        for (int space = 1; space <= n - row; space++){
            cout << " ";
        }
        cout << endl;
    }

    for (int row = n; row >= 1; row--){
        // Space loop 

        for (int space = 1; space <= n - row; space++){
            cout << " ";
        }
        // star loop
        for (int star = 1; star <= 2 * row - 1; star++){
            cout << "*";
        }
        //space loop
        for (int space = 1; space <= n - row; space++){
            cout << " ";
        }
        cout << endl;
    }


    // 1
    // 0 1
    // 1 0 1
    // 0 1 0 1
    // 1 0 1 0 1
    int bin;
    for(int i = 1; i <= 4; i++){
        if(i % 2 == 0){
            bin = 0;
        }else{
            bin = 1;
        }
        for(int j = 1; j <= i; j++){
           cout << bin;
        //    if (bin == 0){
        //     bin = 1;
        //    }else{
        //     bin = 0;
        //    }

        // Ternary operator
        // (bin == 0) ? bin = 1 : bin = 0;
        bin = !bin;

        }
        cout << endl;
    }



    return 0;
}