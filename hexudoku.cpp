#include <iostream>

using namespace std;

bool valid(char number, char hexoduko[16][16], int row, int col){
    for (int c = 0; c < 16; c++){
        if (hexoduko[row][c] == number){
            return false;
        }
    }
    for (int r = 0; r < 16; r++){
        if (hexoduko[r][col] == number){
            return false;
        }
    }
    for (int r = 4*(row/4); r < 4*(row/4)+4; r++){
        for (int c = 4*(col/4); c < 4*(col/4)+4; c++){
            if (hexoduko[r][c] == number){
                return false;
            }
        }
    }
    return true;
}

int main(){
    for (int times = 0; times < 10; times++){
        char hexoduko[16][16];
        for (int row = 0; row < 16; row++){
            for (int col = 0; col < 16; col++){
                cin >> hexoduko[row][col];
            }
        }
        char numbers[16] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};
        int possibleInsertions = 0;
        for (int row = 0; row < 16; row++){
            for (int col = 0; col < 16; col++){
                if (hexoduko[row][col]=='-'){
                    for (const char &number : numbers){
                        if (valid(number, hexoduko, row, col)){
                            hexoduko[row][col] = number;
                            possibleInsertions++;
                            break;
                        }
                    }
                }
            }
        }
        cout << possibleInsertions << endl;
        /* display the grid
        int space = 1;
        for (int row = 0; row < 16; row++){
            for (int col = 0; col < 16; col++){
                cout << hexoduko[row][col];
                if (space%4==0){
                    cout << ' ';
                }
                space++;
            }
            cout << endl;
        }*/
    }
}
