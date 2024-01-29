#include <bits/stdc++.h>

using namespace std;

int main()
{

    // Q1. Take students marks from user and find maximum mark from that

    // input : n = 5
    // [33, 45, 50, 30, 33]
    // output : 50

    int n;
    cout << "Enter number of students you want: ";
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Enter marks: ";
        cin >> arr[i];
    }

    int maxEle = arr[0];

    for (int i = 1; i < n; i++)
    {
        if (arr[i] > maxEle)
        {
            maxEle = arr[i];
        }
    }

    cout << "Maximum Mark is : " << maxEle << endl;

    /*
    Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

    You may assume that each input would have exactly one solution, and you may not use the same element twice.

    You can return the answer in any order.



    Example 1:

    Input: nums = [2,7,11,15], target = 9
    Output: [0,1]
    Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].
    Example 2:

    Input: nums = [3,2,4], target = 6
    Output: [1,2]
    Example 3:

    Input: nums = [3,3], target = 6
    Output: [0,1]

    */
    int nums[] = {2,7,11,15};
    int target = 9;  
    int len = sizeof(nums)/sizeof(nums[0]);

    for (int i = 0; i < len; i++){
        for(int j = i + 1; j < len; j++){
            if(nums[i] + nums[j] == target){
                cout << i <<" "<<  j <<endl;
                break;
            }
        }
    }
    
    // Find out missing num in array
    // [1, 2, 3, 5, 6, 7] -->output 4
    int arr22[] = {1, 2, 3, 5, 6, 7, 9, 10};
    int len1 = sizeof(arr22)/sizeof(arr22[0]);
    cout << len1 << endl ;
    for(int i = 0; i < len1 - 1; i++){
        if(arr22[i+1] - arr22[i] == 1){
            continue;
        }else{   
            int ans = arr22[i] + 1;
            cout << ans <<endl;
        }
    }



    return 0;
}