# include <bits/stdc++.h>

using namespace std;

int main(){

    // arr[rowSize][colSize]
    int row = 3, col = 4;

    // 2d array 
    int arr[row][col] = {
        {1, 4, 5, 6},
        {0, 1, 2, 4},
        {0, 6, 8, 8}
    };

    cout << arr[2][2] << endl;

    for(int i = 0; i < row; i++ ){
        for(int j = 0; j < col; j++){
            cout << arr[i][j] << endl;
        }
    }


    // int arr1[row][col];

    // for(int i = 0; i < row; i++ ){
    //     for(int j = 0; j < col; j++){
    //         cout << "Enter num: " <<endl;
    //         cin >> arr1[i][j];
    //     }
    // }

    // cout <<"=================================" << endl;

    // for(int i = 0; i < row; i++ ){
    //     for(int j = 0; j < col; j++){
    //         cout << arr1[i][j] << endl;
    //     }
    // }

    // STL Library(Standard Template library)

    vector<int> arr2;
    pair<int, int> p;

    p.first = 2;
    p.second = 3;


    vector<pair<int, int>> players(4);
    for(int i = 0; i < 4; i++){
        int score, foul;
        cin >> score >> foul;
        players[i].first = score;
        players[i].second = foul;
    }

    vector<pair<int, int>> players;
    for(int i = 0; i < 4; i++){
        int score, foul;
        cin >> score >> foul;
        players.push_back({score, foul})
    }
    cout << "=========================" << endl;
    for (auto item : players){
        cout << item.first << " " << item.second << endl;
    }
    // cout << p.first << p.second << endl;


    // for(int i = 0; i < row; i++ ){
    //     int num;
    //     cin >> num;
    //     arr2.push_back(num);
    // }

    // for(auto i : arr2){
    //     cout << i << endl;
    // }





    return 0;
}