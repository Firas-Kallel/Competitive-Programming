#include <iostream>
#include <string>

using namespace std;

int main(){
    int n, t =0, s = 0;
    cin >> n;
    string input;
    while (input != "EOF"){
        getline(cin,input);
        if (input == "TAKE"){
            t+=1;
            n+=1;
            n = max(1,n%1000);
        }
        else if (input == "SERVE") s+=1;
        else if (input == "CLOSE"){
            cout << t << ' ' << t-s << ' ' << n << endl;
            t = 0;
            s = 0;
        }
    }
}
