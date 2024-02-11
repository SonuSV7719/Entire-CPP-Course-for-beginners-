# include<bits/stdc++.h>

using namespace std;

int main(){
    // Total number of players
    int N;
    cin >> N;

    int arr[N][2];
    // Insert values in arr 
    for(int i = 0; i < N; i++){
        for(int j = 0; j < 2; j++){
            cin >> arr[i][j];
        }
    }

    // for(int i = 0; i < N; i++){
    //     for(int j = 0; j < 2; j++){
    //         cout << arr[i][j] << " ";
    //     }

    //     cout << endl;
    // }
    
    // creat array of N scores because we have n player
    int scores[N];
    // calculat score for each player
    for(int i = 0; i < N; i++){
       scores[i] = (arr[i][0] * 5) - (arr[i][1] * 3);
    }

    // for(int i = 0; i < N; i++){
    //    cout << scores[i]<<endl;
    // }

    // initially count will 0
    int cnt = 0;
    // for to get the count of player who scored mmore than 40
    for(int i = 0; i < N; i++){
       if (scores[i] > 40){
             cnt++;
       }
    }
    // each player got more than 40 condition
    if (cnt == N){
        cout << cnt << "+" << endl;
    }else{ // not more than 40 condition
        cout << cnt << endl;
    }

    return 0;
}