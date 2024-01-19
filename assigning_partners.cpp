#include <iostream>
#include <string>

using namespace std;

bool duplicate(string v[2][30], int n){
    for (int j = 0; j<n; j++){
        if (v[1][j]==v[0][j]) return true;
    }
    return false;
}

bool mismatched(string v[2][30], int n){
    for (int j = 0; j<n; j++){
        for (int k = 0; k<n; k++){
            if (v[0][k]==v[1][j] && v[1][k] != v[0][j]) return true;
        }
    }
    return false;
}

int main(){
    int n;
    cin >> n;
    string partners [2][30];
    for (int i = 0; i<2; i++){
        for (int j =0; j<n; j++){
            cin >> partners[i][j];
        }
    }
    if (duplicate(partners, n)) cout << "bad" << endl;
    else if (mismatched(partners, n)) cout << "bad" << endl;
    else cout << "good" << endl;
}
