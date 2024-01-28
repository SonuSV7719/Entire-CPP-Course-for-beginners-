#include<bits/stdc++.h>

using namespace std;

int main(){

    // Q1. Take students marks from user and find maximum mark from that

    // input : n = 5
    // [33, 45, 50, 30, 33]
    // output : 50

    int n;
    cout << "Enter number of students you want: ";
    cin >> n;

    int arr[n];

    for(int i = 0; i < n; i++){
        cout << "Enter marks: ";
        cin >> arr[i];
    }

    int maxEle = arr[0];

    for(int i = 1; i < n; i++){
        if (arr[i] > maxEle){
            maxEle = arr[i];
        }
    }

    cout << "Maximum Mark is : " << maxEle <<endl;

    return 0;
}