# include<bits/stdc++.h>

using namespace std;

int main(){

    int regBox;
    int smallBox;
    cin >> regBox >> smallBox;

    int ans = (regBox * 8 + smallBox * 3) - 28;

    if (ans > 0){
        cout << ans <<endl;
    }else{
        cout << 0 << endl;
    }

    return 0;
}