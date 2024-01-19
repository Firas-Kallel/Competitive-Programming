#include <iostream>
#include <string>

using namespace std;

int compute(string n){
    int sum = 0;
    bool d = true;
    for (int i = n.length()-1; i >=0 ; i--){
        sum = (d)? sum+(2*(n[i] -'0'))%10+(2*(n[i] -'0'))/10 : sum+(n[i] -'0');
        d = !d;
    }
    int check = (sum%10==0)? 0:10-sum%10;
    return check;
}

int main(){
    for (int i = 0; i < 5; i++){
        string n1, n2, n3, n4, n5;
        cin >> n1 >> n2 >>n3 >>n4 >>n5;
        cout << compute(n1) << compute(n2) << compute(n3) << compute(n4) << compute(n5) << endl;
    }
}
