#include <iostream>

using namespace std;

bool Distinct(string s){
    for (int i =0; i< s.length(); i++){
        if (i != s.find(s[i])) return false;
    }
    return true;
}

int main(){
    string year;
    cin >> year;
    bool distinct = false;
    year = to_string(stoi(year)+1);
    while (distinct==false){
        if (Distinct(year)){
            cout << year << endl;
            distinct = true;
        }
        else year = to_string(stoi(year)+1);
        
    }
}
