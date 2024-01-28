#include <bits/stdc++.h>

using namespace std;

int main()
{

    // 1. Why Array?
    // int a = 22;

    // single variable which can store multiple values
    // Due to this we dont need to createe mutiple variables for multiple values

    // 2. What  Array? --> Array is a data type which can store multiple elements in contiguous manner of same data type

    // 3. CRUD --> Create, Read, Update, Delete values

    // 1. Create

    // Syntax
    // datatype variableName[size]; // declaration
    // datatype variableName[size] = {value1, value2, ....}; // Defination // size --> optional

    string item[2] = {"Banana", "Apple"};
    string item2[] = {"Banana", "Apple"}; // defination
    int n = 7;
    string item3[n]; // Declaration

    // 2. Indexing --> how you can access elements inside of your array -->

    string item4[] = {"Banana", "Apple", "XYZ", "ABC", "Laptop"}; // length of item4 --> 5
    // indexing -->      0        1        2      3        4      // what will be last index --> length - 1

    // 3. Read

    cout << item << endl; // you will get memory address first part

    cout << "Item 1: based on indexing: " << item4[1] << endl;
    // cout << "Item 5: based on indexing: " << item4[5] << endl; // segmentation fault --> memory --> dont have that address
    cout << "Item 4: based on indexing: " << item4[4] << endl;
    cout << "================================================================" << endl;

    for (int i = 0; i < sizeof(item4) / sizeof(string); i++)
    {
        cout << "Item " << i << " : " << item4[i] << endl;
    }
    // auto --> Automatically assign data type
    cout << "================================================================" << endl;
    // For in loop --> only applied when u have iterable thing --> iterable means --> which have index
    for (auto it : item4)
    {
        cout << it << endl;
    }
    cout << "================================================================" << endl;
    for (string it : item4)
    {
        cout << it << endl;
    }

    string name = "Sonu"; // character of array-->  char name[] = {'S', 'o', 'n', 'u'};
                          // index        0123
    cout << "================================================================" << endl;
    for (auto letter : name)
    {
        cout << letter << endl;
    }

    cout << "================================================================" << endl;
    cout << name.size() << endl; // 4
    for (int i = 0; i < name.size(); i++)
    {
        cout << "letter " << i << " : " << name[i] << endl;
    }
    cout << "================================================================" << endl;
    for (char letter : name)
    {
        cout << letter << endl;
    }

    // 4. How to Update any value inside array
    string item10[] = {"Banana", "Apple", "XYZ", "ABC", "Laptop"};

    // point out that element using index and then assign it to new value
    item10[1] = "Chair";
    cout << "================================================================" << endl;
    for (string i : item10)
    {
        cout << i << endl;
    }

    // Range based iterating over array
    for (int i = 1; i < sizeof(item10) / sizeof(item10[0]) - 1; i++)
    {
        cout << "Item:  " << i << " : " << item10[i] << endl;
    }

    // 4. How array and pointer are related

    int arr10[] = {1, 2, 43, 6, 6, 7};
    cout << "Address of first ele: " << (arr10) << endl;
    cout << "value of first ele: " << (*arr10) << endl;
    cout << "Address of 2nd ele: " << (arr10 + 1) << endl;
    cout << "value of 2nd ele: " << *(arr10 + 1) << endl;
    cout << "================================================================" << endl;

    for (int i = 0; i <= sizeof(arr10) / sizeof(arr10[0]); i++)
    {
        cout << "value of ele: " << *(arr10 + i) << endl;
    }
    cout << "================================================================" << endl;
    // Reverse looping on array
    for (int i = sizeof(arr10) / sizeof(arr10[0]) - 1; i >= 0; i--)
    {
        cout << "value of ele: " << arr10[i] << endl;
    }

    // How to take array input from user

    int size;
    cout << "Enter size of arr: ";
    cin >> size;
    int arr33[size];

    for(int i = 0; i < size;i++){
        cout << "Enter num: ";
        cin >> arr33[i];
    }

    for (auto i : arr33)
    {
        cout << i << endl;
    }

    return 0;
}